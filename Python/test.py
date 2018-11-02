# Lam Tran
# 2016 - Present
# Catch-all Python file for learning and experiments


import nltk
import pylab

def main():
    math()

#Creating a class, realistically should be placed in a separate file to be imported
class Student():
    #Declaring initial properties
    def __init__ (self, name, ID):
        self.name = name
        self.ID = ID

    #Declaring methods of the object
    def changeID (self, ID):
        self.ID = ID

    def print(self):
        print("{} - {}".format(self.name, self.ID))

    '''Run this in main to test'''
    '''jane = Student("Jane", 10)
       jane.print()
       jane.changeID(11)
       jane.print() '''

def square(x):
    return x ** 2


def Dict(): #Testing dictionaries
    #Declared the same way as a list, but with colons and declared with {brackets}
    #The first index is a key, associated with an element
    pizzas = {
        "cheese": 9,
        "pepperoni": 10,
        "vegetable": 11,
        "barbecue chicken": 12
    }

    #Editing the dictionary
    pizzas["cheese"] = 8

    #Adding to the dictionary
    pizzas["bacon"] = 10
    pizzas[1] = "chicken nugget" #Integer associations, with words as well, work
    pizzas["c"] = 6 #Characters work

    #Prints each type of pizza
    for pie in pizzas:
        print(pie)
    print()

    #Using conditionals with dictionaries
    if pizzas["cheese"] < 10:
        print("cheese pizza cheap AF!")
    print()

    #Printing the elements
    for pie, price in pizzas.items(): #The elements without keys are not guaranteed to be printed in order, keep in mind
        print(price)
    print()

    #Printing the keys with their associated elements
    for pie, price in pizzas.items(): #Keys are always associated with their respective elements
        print("A {} pizza costs {}.".format(pie, price))


def Tuples(): #Testing tuples, ordered, immutable pairs
    #Declaring a list of tuples
    presidents = [
        ("George Washington", 1789),
        ("John Adams", 1797),
        ("Thomas Jefferson", 1801),
        ("James Madison", 1809)
    ]

    #Iterating through the list of tuples
    for prez, year in presidents:
        print("In {1}, {0} served as President".format(prez, year)) #notice order of format doesnt matter, 0 index is always first, 1 second
    print()

    #Functionally the same thing as above
    for prez, year in presidents:
        print("In " + str(year) + ", " + prez + " served as President")


def Lists(): #Testing lists
    num = []
    num.append(1) #Append only takes one argument
    num.insert(1, 2) #Insert inserts a number into the given index (index, number)
    num.append({"bing": 10}) #A list can contain all types of elements
    num.insert(3, "bong") #Insert works as well
    num[len(num):] = [x for x in range(5, 8)] #Splices a list onto existing list

    for item in num:
        print(item)

    numbers = [0,0,0,0,0,0]
    numbers[0] += 1
    print(numbers[0])


def Loops(): #Testing loops
    for m in range(5): #Testing if adding to a counter of the loop shortens it, does not
        m += 1
        print(m)

    for n in range(0, 6, 2): #Testing differently incremented loops
        print(n)

    print(n) #Testing if a variable within a loop remains valid for outside use

    counter = 0 #Testing a while for loop
    while counter < 10:
        print(counter)
        counter += 1


def compare(): #Testing comparison statements
    #Testing character comparisons: works
    print("Do you like cheese? y or n? ", end="")
    c = input()

    if c == "Y" or c == "y":
        print("You a cheeser!")
    elif c == "N" or c == "n":
        print("Oh dang ok")
    else: print("Didn't even enter the right input boy") #works

    #Testing string comparisons: works
    print("string s = ", end="")
    s = input()

    print("string t = ", end="")
    t = input()

    if s != None and t != None:
        if s == t:
            print("The strings are the same")
        else:
            print("The strings are different")

    #Printing a capitalized string
    S = s.capitalize()
    print("{}".format(S))


def strings(): #Playing with for loops and strings
    #Testing int for loops
    for i in range(5):
        print(i)
    print()

    #Getting string from user
    print("Give me a string boy", end="")
    s = input()

    #Testing str for loops
    for i in s:
        print(i)
    print()

    #Getting length of string
    print("length of the string = {}".format(len(s)))

    #Iterating through length of string
    for i in range(0, len(s)):
        print(i)
    print()

    # Testing access of indices in strings
    for i in range(len(s)):
        print(s[i])


def ascii(): #Iterates through each letter of the alphabet in ascii
    for i in range(65, 65 + 26):
        print("{} is {}".format(chr(i), i))


def f2c(): #Converts fahrenheit to celsius
    #Gets fahrenheit temp from user
    print("What is the temperature in fahrenheit? ", end="")
    f = get_positive_int()

    #Calculates celsius temp and prints it
    c = 5 / 9 * (f - 32)
    print("The temperature in fahrenheit is {:.1f}".format(f))
    print("The temperature in celsius is {:.1f}".format(c))


def get_positive_int(): #Gets a positive int from user
    while True:
        n = input()
        if n < 0:
            print("Please input a positive number")
        else:
            break
    return n


def math(): #Does math operations
    #Getting x input
    print("x is ", end="")
    x = int(input())

    #Getting y input
    print("y is ", end="")
    y = int(input())

    #Calculations
    print("{} plus {} is {}".format(x, y, x + y))
    print("{} minus {} is {}".format(x, y, x - y))
    print("{} times {} is {}".format(x, y, x * y))
    print("{} divided by {} is {:.5f}".format(x, y, x / y))
    print("{} divided by {} (and floored) is {}".format(x, y, x // y))
    print("{} modulo {} is {}".format(x, y, x % y))

def scope():
    for i in range(5):
        print(i)
    print(i)

if __name__ == "__main__":
    main()
