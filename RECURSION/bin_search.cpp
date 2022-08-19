#include <iostream>
using namespace std;



int bin_search(int* arr, int l, int h, int val)
{
    if ( l > h )
        return -1;
    

    int mid = (l+h)/2;
    
    if ( arr[mid] == val )
        return mid;
    
    if ( arr[mid] > val )
        h = mid-1;
    
    else 
        l = mid+1;
    
    return bin_search(arr, l, h, val);
}



int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);


    cout << bin_search(arr, 0, size-1, 4) << endl;
    cout << bin_search(arr, 0, size-1, -2) << endl;
    cout << bin_search(arr, 0, size-1, 8) << endl;
    cout << bin_search(arr, 0, size-1, 6) << endl;
    cout << bin_search(arr, 0, size-1, 1) << endl;
    return 0;
}