# CPTR 141: Objective #9 (2 point)

## Problem Overview

Your task in this homework assignment is to create a function reads a file and returns a dictionary where each key represents a unique word and the value representing the number of occurrences.
Ignore all punctuation and convert any uppercase letter to all lowercase.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `unique_word_count` in the file `unique_word_count.py` which takes one parameter representing the name of the file.

1. The function must returns a dictionary where each key represents a unique word in file and the value representing the number of occurrences.

1. The solution must use the `with` statement to open the file.

1. The file `unique_word_count` should not contain a main program, it should only contain your function. To test your function, add code to the
`unique_word_count_test.py` file. Note that code in `unique_word_count_test.py` will not be graded.

1. Below is an example of a call to the `unique_word_count` function which you could implement in `unique_word_count_test.py` to test your function.

Python Code:
```python
import unique_word_count

result = unique_word_count.unique_word_count("lyrics.txt")
print("The dictionary created using {} is {}".format("lyrics.txt", result))

```

The first four lines from lyrics.txt:
```html
Row, row, row your boat
Gently down the stream
Merrily merrily, merrily, merrily
Life is but a dream
```

Output:
```html
The dictionary created using lyrics.txt is {'row': 30, 'your': 9, 'boat': 11, 'gently': 8, 'down': 7, 'the': 14, 'stream': 3, 'merrily': 8, 'life': 2, 'is': 3, 'but': 3, 'a': 7, 'dream': 2, '': 9, 'brook': 1, 'if': 4, 'you': 4, 'catch': 1, 'little': 2, 'fish': 1, 'please': 1, 'let': 1, 'it': 2, 'off': 1, 'hook': 1, 'creek': 1, 'see': 3, 'mouse': 1, 'listen': 1, 'to': 4, 'squeak': 1, 'river': 2, 'gets': 1, 'wet': 1, "don't": 3, 'forget': 2, 'shiver': 1, 'shore': 1, "lyin'": 1, 'bear': 1, 'roar': 1, 'watch': 1, 'water': 2, 'flow': 1, "rowing's": 2, 'fun': 1, 'hard': 1, 'that': 1, 'what': 1, 'i': 1, 'know': 1, 'lake': 1, 'stand': 1, 'up': 1, 'and': 2, 'rock': 1, "that's": 1, 'big': 1, 'mistake': 1, 'run': 1, 'rowing': 2, 'here': 1, 'there': 1, 'oh': 1, "we're": 1, 'almost': 1, 'done': 1, 'ha': 2, 'fooled': 1, 'ya': 1, 'all': 1, "i'm": 1, 'submarine': 1}
```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
