# given a range L, R, find the XOR of L, L+1, ... R-1, R

def xor(n):
    # if n is power of two.
    if (n % 4 == 0):
        return n
    if (n % 4 == 1):
        return 1
    if (n % 4 == 2):
        return n+1
    if (n % 4 == 3):
        return 0


def ans(L, R):
    return xor(R) ^ xor(L-1)


print(ans(2, 4))
