# give a number n, print the xor of all the numbers from 1 to N.
from functools import reduce


def ans(n):
    # if n is power of two.
    if (n % 4 == 0):
        return n
    if (n % 4 == 1):
        return 1
    if (n % 4 == 2):
        return n+1
    if (n % 4 == 3):
        return 0


for i in range(1, 18):
    print(f"ans({i}): {ans(i)}")
