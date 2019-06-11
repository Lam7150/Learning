people = {
    "Vikas": ["Beth"],
    "Zack": ["Allan"],
    "Alex": ["Mahip"],
    "Tim": ["Luka"],
    "David": ["Robby"],
    "Minh": ["Philip"],
    "Luka": ["Tim"],
    "Robby": ["David"],
    "Mahip": ["Alex"],
    "Allan": ["Zack"],
    "Philip": ["Minh"],
    "Beth": ["Vikas"]
}

for person, chats in people.items():
    print(person + ": " + str(chats))

for i in range(1, 11):
    chats = []
    for person1, person2 in people.items():
        chats.append(person1, person2)