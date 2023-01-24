from functools import reduce
# given an array of n integers, where all elements occur twice, except one element which occurs only once. Find that element.


def ans(arr: list) -> int:
    return reduce(lambda x, y: x ^ y, arr)


print(ans([1, 1, 2, 3, 2, 3, 5, 5, 9]))
