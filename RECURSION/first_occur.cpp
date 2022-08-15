#include <iostream>
using namespace std;


// find the first index where the given element occurs using recursion
int pos(int* arr, int n, int val, int curr_pos = 0)
{
    if ( curr_pos == n )
        return -1; 
    
    if ( arr[curr_pos] == val )
        return curr_pos;
    
    return pos(arr, n, val, curr_pos+1);
}



int main()
{
    int arr[] = {0, 0, 0, 0, 1, 1, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << pos(arr, size, 1) << endl;
    return 0;
}