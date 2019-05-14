fall18 = ["bella", "lauren_h", "lauren_g", "amanda", "piper", "robby", "dfw", "sabrina", "louis", "carley", "michelle", "austin", "joy", "nabila", "luka", "lam", "arsheen", "george", "mike", "drew"]
first = ["pujan", "sush", "sony", "sush", "kayla", "pujan", "isabel", "sony", "cameron", "pujan", "isabel", "pujan", "pujan", "cameron", "sony", "jack", "sonia", "sonia", "cameron", "pujan"]
second = ["sonia", "elena", "sonia", "regina", "allison", "katie", "sush", "sonia", "pujan", "sony", "katie", "katie", "sush", "elena", "regina", "allison", "jenn", "cameron", "ian", "nina"]
third = ["jack", "kayla", "emma", "tyler", "jack", "elena", "cameron", "isabel", "claire", "kayla", "nina", "cameron", "kayla", "emma", "sonia", "cameron", "allison", "regina", "olivia", "tiarah"]
fourth = ["", "ian", "isabel", "sonia", "regina", "", "sonia", "elena", "ian", "regina", "tiarah", "sush", "regina", "sonia", "cameron", "sush", "elena", "pujan", "", "sonia"]
fifth = ["", "tiarah", "sush", "sony", "elena", "", "nina", "pujan", "olivia", "emma", "claire", "claire", "elena", "jack", "isabel", "kayla", "sush", "kayla", "", "elena"]


def main():
    pledges = {}
    for i in range(len(fall18)):
        pledges[fall18[i]] = {
            "1" : first[i],
            "2" : second[i],
            "3" : third[i],
            "4" : fourth[i],
            "5" : fifth[i],
            "parents" : ""
        }
        
    printPledges(pledges)

def printPledges(pledges):
    with open("matches.txt", "w") as matches:
        matches.write("{:10}".format("pledges: "))
        for pledge in pledges:
            matches.write("{:10}".format(pledge))
        matches.write("\n")

        matches.write("{:10}".format("1: "))
        for pledge in pledges:
            matches.write("{:10}".format(pledges[pledge]["1"]))
        matches.write("\n")

        matches.write("{:10}".format("2: "))
        for pledge in pledges:
            matches.write("{:10}".format(pledges[pledge]["2"]))
        matches.write("\n")

        matches.write("{:10}".format("3: "))
        for pledge in pledges:
            matches.write("{:10}".format(pledges[pledge]["3"]))
        matches.write("\n")

        matches.write("{:10}".format("4: "))
        for pledge in pledges:
            matches.write("{:10}".format(pledges[pledge]["4"]))
        matches.write("\n")

        matches.write("{:10}".format("5: "))
        for pledge in pledges:
            matches.write("{:10}".format(pledges[pledge]["5"]))
        matches.write("\n")

        matches.write("{:10}".format("parents: "))
        for pledge in pledges:
            matches.write("{:10}".format(pledges[pledge]["parents"]))
        matches.write("\n")

if __name__ == "__main__":
    main()