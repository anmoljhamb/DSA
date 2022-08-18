#include <iostream>
using namespace std;

/*
    Find the number of ways to fix the number of tiles, given a floor is of size
    n x m, and you have a tile of size 1 x m 
*/


int ans(int n, int m)
{
    if ( n < 0 )
        return 0;
        
    if ( n < 4 )
        return 1;
    
    return ans(n-1, m) + ans(n-m, m);
}


int main()
{
    cout << "Hello World!" << endl;
    return 0;
}