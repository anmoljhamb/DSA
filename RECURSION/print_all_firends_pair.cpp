#include <iostream>
#include <vector>
#include <string>
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
However, now we need to find out all the possible ways.
*/


void ans(int N)
{
    for ( int i=1; i<=N; i++ )
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int N = 3;
    ans(N);
    return 0;
}