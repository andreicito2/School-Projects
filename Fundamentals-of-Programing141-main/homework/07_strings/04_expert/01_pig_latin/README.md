# CPTR 141: Objective #7 (4 point)

## Problem Overview

Your task in this homework assignment is to create a function that converts a string of English words into [Pig Latin](https://en.wikipedia.org/wiki/Pig_Latin) according to the following rules.

1. If a word starts with one or more consonants followed by a vowel, the consonants up to but not including the first vowl are moved to the end of the word and "ay" is added.  For example:

    * "pig" -> "igpay"
    * "floor" -> "oorflay"

1. If a word begins with a vowel, then "yay" is added to the end.  For example:

    * "eat" -> "eatyay"
    * "answer" -> "answeryay"


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `to_pig` in the file `pig_latin.py` which takes as a single parameter a string of english words to be translated.

2. The function must convert each word to pig latin, preserving capitalization at the beginning of words, and return a the translation as a single string.

3. The file `pig_latin` should not contain a main program, it should only contain your function. To test your function, add code to the `pig_latin_test.py` file. Note that code in `pig_latin_test.py` will not be graded.

4. Below is an example of a call to the `to_pig` function which you could implement in `pig_latin_test.py` to test your function.

    Python Code:
    ```python
    import pig_latin

    test_string = "Each person who knows you has a different perception of who you are"

    print(
        "The phrase\n\n\"{}\"\n\ntranslates to\n\n\"{}\"\n\nin pig-latin.".format(
            test_string, pig_latin.to_pig(test_string)
        ))
    ```

    Output:
    ```html
    The phrase

    "Each person who knows you has a different perception of who you are"

    translates to

    "Eachyay ersonpay owhay owsknay ouyay ashay ayay ifferentday erceptionpay ofyay owhay ouyay areyay"

    in pig-latin.
    ```

## Grade Specification

You will earn **four point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
