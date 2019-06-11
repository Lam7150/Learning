/**
 * Arrays and Objects
 */ 

// To-do list
const todos = [
    {
        id: 1,
        text: "Take out trash",
        isCompleted: true
    },
    {
        id: 2,
        text: "Meeting with boss",
        isCompleted: true
    },
    {
        id: 3,
        text: "Dentist appt",
        isCompleted: false
    }
];

// For loops
for (let i = 0; i < 10; i++) {
    //console.log(`For Loop Number: ${i}`);
}

for (let todo of todos) {
    //console.log(todo.text);
}


// forEach
todos.forEach(function(todo) {
    //console.log(todo.text); // prints todo text
});


// Map
const todoText = todos.map(function(todo) {
    return todo.text; // makes array of only todo text
});
//console.log(todoText);


// Filter
const todoCompleted = todos.filter(function(todo) {
    return todo.isCompleted === true;
})
//console.log(todoCompleted);


// While loop: same syntax as C


// Ternary operator
const color = (10 > 5) ? 'red' : 'blue';
//console.log(color);


// Classes in Javascript are functions (functional programming)
function Vehicle(make, model, color) {
    this.make = make,
    this.model = model,
    this.color = color,
    this.getName = function() {
        return this.make + " " + this.model;
    }
}