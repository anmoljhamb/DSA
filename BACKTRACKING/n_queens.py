
N = 5
arr = [[0]*N for _ in range(N)]


def is_solved(arr):

    count = 0
    for i in range(N):
        count += arr[i].count('Q')
    
    return count == N


def is_safe(arr, i, j):
    
    for y in range(N):
        if ( arr[i][y] == 'Q' ):
            return False 
        
    for x in range(N):
        if ( arr[x][j] == 'Q' ):
            return False 
    
    x = i
    y = j
    while ( x < N and y < N ):
        if arr[x][y] == 'Q':
            return False 
        x += 1
        y += 1
    
    x = i
    y = j
    while ( x >= 0 and y >= 0 ):
        if ( arr[x][y] == 'Q' ):
            return False
        x -= 1
        y -= 1
    
    return True 


def solve(arr, col):
    if col >= N:
        return True 

    for i in range(N):

        if is_safe(arr, i, col):
            arr[i][col] = 'Q'
            
            if solve(arr, col+1) == True:
                print(arr)
                return True
            
            arr[i][col] = 0
    
    return False



if __name__ == "__main__":
    solve(arr, 0)