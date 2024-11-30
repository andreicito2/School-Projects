# CPTR 141: Objective #9 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that appends a product and price to the end of a file.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `append_product` in the file `append_product.py` which takes thee parameters:

    i. a string representing the name of the file
    i. a string representing the product name
    i. a float representing the product price

2. The function must append the product name and price the given file using the following format:

    * _Product Name $1.23_

3. The file `append_product` should not contain a main program, it should only contain your function. To test your function, add code to the
`append_product_test.py` file. Note that code in `append_product_test.py` will not be graded.

4. Below is an example of a call to the `append_product` function which you could implement in `append_product_test.py` to test your function.

Python Code:
```python
import append_product

file_name = "products.txt"
product = "Pink Troll"
cost = 12.50
append_product.append_product(file_name, product, cost)
```

File Contents:
```html
Soda $1.00
Cookie $0.50
Pink Troll $12.50
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
