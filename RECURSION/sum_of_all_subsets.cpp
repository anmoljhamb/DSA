#include <iostream>
#include <vector>
using namespace std;


void sum_of_all_subsets(vector<int> arr, int i=0, int temp=0)
{
    if ( i == arr.size() )
    {
        cout << temp << " ";
        return;
    }

    sum_of_all_subsets(arr, i+1, temp);
    
    temp += arr[i];

    sum_of_all_subsets(arr, i+1, temp);
}


int main()
{
    vector<int> arr = {2, 3};

    sum_of_all_subsets(arr);

    return 0;
}