# CPTR 141: Objective #5 (4 point)

## Problem Overview

Your task in this homework assignment is to write a program that mimics a movie theater kiosk. Your program must provide a menu that lets the user perform one of five actions:

1. List all of the movies available to view
2. Buy tickets for a movie
3. List all of the snacks available for purchase
4. Buy snacks
5. Exit the system

When the user exits the system, they should be presented with a receipt for their total purchase.  Make sure you include error checking on all user entries, prompting the user to retry when an invalid entry is detected.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use `input` and `print` to get data from user and display output.

2. You must use the dictionary `data.movies` which contains movie name /price key/value pairs and the dictionary `data.snacks` which contains snack name/price key/value pairs, both from the `data` module.

2. You must format your code using the "Format Document" command in your development environment.

3. You **must** produce output exactly as shown by the `movie_kiosk.pyc` program.  To run this program, right click and choose *Run Code*.  An example is also shown below.

```html
******** MOVIE KIOSK v0.1 *******

Options:
 1) Purchase Movie Ticket from List
 2) Purchase Snacks from List
 3) Check Out and View Receipt

Enter desired option number: 1

=== Select Movie ===
1. Back to the Future ($12.99)
2. Braveheart ($13.99)
3. Blood Diamond ($11.99)
4. Avatar ($14.99)
5. Alice in Wonderland ($13.99)
6. Lord of the Rings ($12.99)
7. The Matrix ($12.99)
8. The Croods ($11.99)
Enter Choice: 2

Options:
 1) Purchase Movie Ticket from List
 2) Purchase Snacks from List
 3) Check Out and View Receipt

Enter desired option number: 2

=== Select Snack ===
1. Twizzlers ($3.99)
2. Soft Pretzels ($6.99)
3. Small Popcorn ($4.99)
4. Medium Popcorn ($10.99)
5. Large Popcorn ($15.99)
6. Chex Snack Mix ($1.99)
7. Pretzel Challah Bagel Dogs ($9.99)
Enter Choice: 4

Options:
 1) Purchase Movie Ticket from List
 2) Purchase Snacks from List
 3) Check Out and View Receipt

Enter desired option number: 3

---------- Receipt ----------
$ 13.99 -- Braveheart
$ 10.99 -- Medium Popcorn
-----------------------------
$ 24.98 -- Total Price

Thank you for your purchase, we hope to see you again!
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
