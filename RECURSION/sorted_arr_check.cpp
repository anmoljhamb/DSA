#include <iostream>
using namespace std;

bool is_sorted(int *arr, int size)
{
    if (size == 0)
        return true;
    if (arr[size] < arr[size - 1])
        return false;
    return is_sorted(arr, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 4};
    int size = sizeof(arr) / sizeof(int);
    cout << is_sorted(arr, size) << endl;
    return 0;
}