#include<bits/stdc++.h>
using namespace std;

int largest_el(vector<int> arr) {
    int max_el = INT32_MIN;
    for ( int i=0; i<arr.size(); i++ )
    {
        max_el = max(max_el, arr[i]);
    }
    return max_el;
}


int main()
{
    vector<int> arr; 
    for ( int i=0; i<13; i++ )
    {
        arr.push_back(i*i);
    }
    cout << "The largest element from the arr is: " << largest_el(arr) << endl;
}