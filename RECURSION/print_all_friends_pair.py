def display(arr):
    printed = [False]*len(arr)
    
    for i in range(1, len(arr)):
        if (not printed[i]):
            if ( arr[i] == 0 ):
                print(f"({i})", end=" ")
            else:
                print(f"({i}, {arr[i]})", end=" ")
            printed[i] = True
            printed[arr[i]] = True
            

def ans(arr):
    if ( arr.count(-1) == 0 ):
        # Means that if there are no people left to pair, return
        display(arr)
        print()
        return

    # First element that has not been chosen yet
    idx = arr.index(-1)
    # Let's make the current element single.
    arr[idx] = 0
    ans(arr)
    arr[idx] = -1

    for i in range(idx+1, len(arr)):
        if ( arr[i] == -1 ):
            arr[i] = idx 
            arr[idx] = i 
            
            ans(arr)

            arr[i] = -1
            arr[idx] = -1

def main():
    n = 4
    arr = [-2]+[-1]*n 
    ans(arr)


if __name__ == "__main__":
    main();