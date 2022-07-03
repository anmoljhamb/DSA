#include<bits/stdc++.h>
using namespace std;

vector<int> k_rotate(vector<int> arr, int k){
    vector<int> ans;
    int n = arr.size();
    for ( int i = n-k; i<n; i++)
    {
        ans.push_back(arr[i]);
    }

    for ( int i = 0; i<n-k; i++)
    {
        ans.push_back(arr[i]);
    }
    return ans;
}


int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    arr = k_rotate(arr, k);
    for ( int x : arr )
        cout << x << " ";
    cout << endl;
    return 0;
}