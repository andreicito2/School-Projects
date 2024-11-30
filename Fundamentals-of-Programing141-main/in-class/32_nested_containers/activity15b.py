crew = {
    "Captain": {
        "first name": "James",
        "last name": "Kirk",
        "rank": "Captain",
        "email": "capt.kirk@enterprise.com",
    },
    "First Officer": {
        "first name": "S'chn",
        "last name": "Spock",
        "rank": "Commander",
        "email": "mr.logical@enterprise.com",
    },
}
 

for (position, person) in crew.items():
    print("{} {} ({}) <{}>".format(person['first name'], person['last name'], person['rank'], person['email']))



for (project, person) in gradebook.items():
    print("{}".format(person['projects']))