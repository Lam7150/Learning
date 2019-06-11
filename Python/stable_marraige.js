// Opening Family Preferences Spreadsheet
var sheet = SpreadsheetApp.openById("1ZozWkm7h3fXTVu2mtIbpYCuV7nDPUD_YippcVQ2MC4U");
var results = SpreadsheetApp.openById("1_PL0060oQ7d3RnQ5osVgKO9BtN0GdNUs7FYfQkFaVU4").getSheets()[0];

function main() {
  /** Declaring and initializing information **/
  var people = sheet.getRange("B2:C41").getValues();
  var parents = {};
  var pledges = {};
  var parentPreferences = [];
  var pledgePreferences = [];
  
  /** Getting preference options **/
  parentPreferences.push(sheet.getRange("AA1:AT1").getValues()[0]);
  pledgePreferences.push(sheet.getRange("G1:Z1").getValues()[0]);
  var current = "";
  
  for (var i = 0; i < parentPreferences[0].length; i++) {
    current = parentPreferences[0][i];
    parentPreferences[0][i] = current.slice(current.indexOf("[")+1, current.indexOf("]"));
    current = pledgePreferences[0][i];
    pledgePreferences[0][i] = current.slice(current.indexOf("[")+1, current.indexOf("]")); 
  }
  
  /** Categorizing people into pledges and parents **/
  for (var i = 0; i < people.length; i++) {
    // Add parents to array
    if (people[i][1] == "Parent") {
      parents[people[i][0]] = {
        "1" : "",
        "2" : "",
        "3" : "",
        "4" : "",
        "5" : "",
        "pledges" : ""
      };
      
      // Adding parent preferences to array
      parentPreferences.push(sheet.getRange("AA"+(i+2)+":AT"+(i+2)).getValues()[0].concat([people[i][0]]));
    } else {
      // Adding pledges to array
      pledges[people[i][0]] = {
        "1" : "",
        "2" : "",
        "3" : "",
        "4" : "",
        "5" : "",
        "parents" : ""
      };
      
      // Adding pledge preferences to array
      pledgePreferences.push(sheet.getRange("G"+(i+2)+":Z"+(i+2)).getValues()[0].concat([people[i][0]]));
    }
  }
    
  /** Inserting preference rankings **/
  var parentName, pledgeName, choice;
  var nameIndex = parentPreferences[1].length-1;
  // Parents
  for (var i = 1; i < parentPreferences.length; i++) {
    for (var n = 0; n < parentPreferences[0].length; n++) {
      if (parentPreferences[i][n] != "") {
        parentName = parentPreferences[i][nameIndex];
        pledgeName = parentPreferences[0][n];
        choice = parentPreferences[i][n];
        
        if (choice == "1st Choice") {
          parents[parentName]["1"] = pledgeName;
        } else if (choice == "2nd Choice") {
          parents[parentName]["2"] = pledgeName;
        } else if (choice == "3rd Choice") {
          parents[parentName]["3"] = pledgeName;
        } else if (choice == "4th Choice") {
          parents[parentName]["4"] = pledgeName;
        } else if (choice == "5th Choice") {
          parents[parentName]["5"] = pledgeName;
        }
      }
    }
  }
      
  // Pledges
  for (var i = 1; i < pledgePreferences.length; i++) {
    for (var n = 0; n < pledgePreferences[0].length; n++) {
      if (pledgePreferences[i][n] != "") {
        pledgeName = pledgePreferences[i][nameIndex];
        parentName = pledgePreferences[0][n];
        choice = pledgePreferences[i][n];
        
        if (choice == "1st Choice") {
          pledges[pledgeName]["1"] = parentName;
        } else if (choice == "2nd Choice") {
          pledges[pledgeName]["2"] = parentName;
        } else if (choice == "3rd Choice") {
          pledges[pledgeName]["3"] = parentName;
        } else if (choice == "4th Choice") {
          pledges[pledgeName]["4"] = parentName;
        } else if (choice == "5th Choice") {
          pledges[pledgeName]["5"] = parentName;
        }
      }
    }
  }
    
  /** Stable Marriage Algorithm **/
  // Parents proposal
  var choice, currentParentRank, proposingParentRank, existingParentRank;
  for (var rank = 1; rank <= 5; rank++) {
    for (var parent in parents) {
      choice = parents[parent][String(rank)];
      
      if (choice == "")
        continue;

      // Parents initial proposal to their first choice child
      if (pledges[choice]["parents"] == "" && parents[parent]["pledges"] == "") {
        pledges[choice]["parents"] = parent;
        parents[parent]["pledges"] = choice;
      } else {
        // Parents' proposal to next choice children
        currentParentRank = findParentRank(choice, pledges[choice]["parents"]);
        proposingParentRank = findParentRank(choice, parent);
        existingParentRank = findExistingParentRank(pledges, parent);
        
        if (proposingParentRank < currentParentRank && existingParentRank > proposingParentRank) {
          pledges[choice]["parents"] = parent;
          parents[parent]["pledges"] = choice;
        }
      }  
    }
  } 

  /** Pledges proposal **/
  var choice, currentPledgeRank, proposingPledgeRank, existingPledgeRank;
  for (var rank = 1; rank <= 5; rank++) {
    for (var pledge in pledges) {
      choice = pledges[pledge][String(rank)];
      
      if (choice == "")
        continue;
      
      // Parents initial proposal to their first choice child
      if (parents[choice]["pledges"] == "" && pledges[pledge]["parents"] == "") {
        parents[choice]["pledges"] = pledge;
        pledges[pledge]["parents"] = choice;
      } else {
        // Parents' proposal to next choice children
        currentPledgeRank = findPledgeRank(choice, parents[choice]["pledges"]);
        proposingPledgeRank = findPledgeRank(choice, pledge);
        existingPledgeRank = findExistingPledgeRank(parents, pledge);
        
        if (proposingPledgeRank < currentPledgeRank && existingPledgeRank > proposingPledgeRank) {
          parents[choice]["pledges"] = pledge;
          pledges[pledge]["parents"] = choice;
        }
      }  
    }
  }
  

  var finalPairings = []
    Object.keys(parents)
      .sort()
      .forEach(function(key, i) {
        finalPairings.push([parents[key]["pledges"], key]);
       });
  results.getRange("D16:E35").setValues(finalPairings); 
  
  finalPairings = [];
  Object.keys(pledges)
      .sort()
      .forEach(function(key, i) {
        finalPairings.push([key, pledges[key]["parents"]]);
       });
  results.getRange("A16:B35").setValues(finalPairings); 
  
  
  
  
  /**Printing Preferences   
  var i = 0;
  for (var key in parents) {
    results.getRange(1, i+2).setValue(key);
    results.getRange(2, i+2).setValue(parents[key]["1"]);
    results.getRange(3, i+2).setValue(parents[key]["2"]);
    results.getRange(4, i+2).setValue(parents[key]["3"]);
    results.getRange(5, i+2).setValue(parents[key]["4"]);
    results.getRange(6, i+2).setValue(parents[key]["5"]);
    i++
    //Logger.log(parents[i]);
    //Logger.log(parentPreferences[i]);
  }
  
  i = 0;
  for (var key in pledges) {
    results.getRange(8, i+2).setValue(key);
    results.getRange(9, i+2).setValue(pledges[key]["1"]);
    results.getRange(10, i+2).setValue(pledges[key]["2"]);
    results.getRange(11, i+2).setValue(pledges[key]["3"]);
    results.getRange(12, i+2).setValue(pledges[key]["4"]);
    results.getRange(13, i+2).setValue(pledges[key]["5"]);
    i++;
    //Logger.log(pledges[i]);
  } **/
  
}

function findParentRank(pledge, parent) {
  for (var rank = 1; rank <= 5; rank++) {
    if (pledge[String(rank)] == parent) {
      return rank; 
    }
  }
  
  return 6;
}

function findExistingParentRank(pledges, parent) {
  var lowestRank = 6, rank = 6;
  
  for (var key in pledges) {
    rank = findParentRank(key, parent);
    if (rank < lowestRank) {
      lowestRank =  rank;
    }
  }
  
  return lowestRank;
}

function findPledgeRank(parent, pledge) {
  for (var rank = 1; rank <= 5; rank++) {
    if (parent[String(rank)] == pledge) {
      return rank; 
    }
  }
  
  return 6;
}

function findExistingPledgeRank(parents, pledge) {
  var lowestRank = 6, rank = 6;
  
  for (var key in parents) {
    rank = findParentRank(key, pledge);
    if (rank < lowestRank) {
      lowestRank =  rank;
    }
  }
  
  return lowestRank;
}