#include <iostream>
using namespace std;

// Given an arr of length n, return the element which is repeated twice
// given the fact that all the elements occour once, except 1;
int number(int* arr, int n)
{
    int ans = 0;
    for ( int i=0; i<n; i++ )
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << number(arr, n);
    return 0;
}