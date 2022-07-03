#include <bits/stdc++.h>
using namespace std;


int max_sum(vector<int> arr) 
{
    bool kadane = false;
    int max_val = INT32_MIN;
    for ( auto x: arr )
    {
        if ( x > 0 )
        {
            kadane = true;
            break;
        }
        max_val = max(max_val, x);
    }
    if (!kadane)
        return max_val;
    
    int curr_sum = 0;
    int largest_sum = 0;
    
    for ( int x: arr)
    {
        curr_sum += x;
        if ( curr_sum < 0 )
        {
            curr_sum = 0;
        }
        largest_sum = max(curr_sum, largest_sum);
    }
    return largest_sum;
}


int main()
{
    vector<int> arr_1{1, -2, 3, 4, 4, -2};
    vector<int> arr_2{-2, -1, -3}; // Would give the anwer zero if you just use 
    // kadane's algorithm.
    cout << "Max sum in the vector is: " << max_sum(arr_1) << endl;
    cout << "Max sum in the vector is: " << max_sum(arr_2) << endl;
    return 0;
}