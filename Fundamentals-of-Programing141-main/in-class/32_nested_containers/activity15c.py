gradebook = {
    "Samantha": {
        "objectives": {
            "one": {
                "homework": 10,
                "quiz": 0.95
            },
            "two": {
                "homework": 13,
                "quiz": 0.9
            },
            "three": {
                "homework": 11,
                "quiz": 1
            }
        },
        "projects": ["E", "M"],
        "participation": {
            "reading": [1, 1, 1, 1, 0, 1, 1],
            "pogil": [1, 1, 1, 1, 1, 1, 1, 1, 1]
        }
    }
}
for student in gradebook:
    for num in student.index("objectives"):
        total += num.index('homework')
        
print(total)