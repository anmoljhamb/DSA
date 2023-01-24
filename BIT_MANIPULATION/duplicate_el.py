from functools import reduce
# given an array of n integers, where all elements occur twice, except one element which occurs only once. Find that element.


def ans(arr: list) -> int:
    return reduce(lambda x, y: x ^ y, arr)

# what if there were two elements which occur exactly once.


def lsb_index(n: int):
    count = 0
    while n != 0:
        if (n & 1):
            return count
        count += 1
        n = n >> 1
    return count


def check_ith_bit(n: int, index: int) -> int:
    return n & (1 << index)


def ans_1(arr: list):
    xor = reduce(lambda x, y: x ^ y, arr)
    # find the index of lsb.
    number_1 = 0
    number_2 = 0
    index = lsb_index(xor)

    for x in arr:
        if (check_ith_bit(x, index)):
            number_1 = number_1 ^ x
        else:
            number_2 = number_2 ^ x

    return number_1, number_2


print(ans([1, 1, 2, 3, 2, 3, 5, 5, 9]))
print(ans_1([1, 1, 2, 4, 3, 2, 3, 5, 5, 9, 4, 10]))
