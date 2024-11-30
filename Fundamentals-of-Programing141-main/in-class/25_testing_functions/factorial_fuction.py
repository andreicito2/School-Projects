def factorial(n):
    '''
    Returns the factorial of the integer n. this is the porduct of all integers
    from 1 up to and includeing the number n.
    '''
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result
