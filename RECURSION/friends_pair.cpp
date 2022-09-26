#include <iostream>
using namespace std;

/*
    Find the number of ways N number of friends can pair. 
    For example, for N = 3, there can be 4 ways.
    {1}, {2}, {3}
    {1}, {2, 3}
    {2}, {1, 3}
    {3}, {1, 2}
A person can either decide to go single, (1) 
or choose one person from the remaining people.

single = 1 * f ( n - 1 )
remaining = (n-1)C1 * f(n-2)
*/

int ans(int N)
{
    if ( N == 0 || N == 1)
        return 1;
    
    if ( N == 2 )
        return 2;
    
    return ans(N-1) + (N-1)*ans(N-2);
}

int main()
{
    int N = 3;
    cout << ans(N) << endl;
    return 0;
}