def check_ith_bit(number: int, i: int) -> bool:
    return (number & (1 << i)) != 0
