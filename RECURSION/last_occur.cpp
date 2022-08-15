#include <iostream>
using namespace std;


// find the last index where the given element occurs using recursion
int pos(int* arr, int n, int val)
{
    // initially n points to the last element of the arr
    if ( n == -1 )
        return n;
    
    if ( arr[n] == val )
        return n;
    
    return pos(arr, n-1, val);
}



int main()
{
    int arr[] = {0, 0, 0, 0, 1, 1, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << pos(arr, size, 1) << endl;
    return 0;
}