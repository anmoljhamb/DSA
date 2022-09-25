#include <iostream>
#include <vector> 
#include <string>
using namespace std;


void bin_string(int n, vector<string> &arr, int i=0)
{
    if ( n == 1 )
    {
        arr.push_back("0");
        arr.push_back("1");
        return;
    }

    bin_string(n-1, arr);
    vector<string> temp_arr; 
    
    for ( auto x : arr )
    {
        temp_arr.push_back("0"+x);
    }

    for ( auto x : arr )
    {
        temp_arr.push_back("1"+x);
    }
    arr = temp_arr;
}


int main()
{
    vector<string> arr;
    int n = 3; 
    bin_string(n, arr);

    for ( auto x : arr )
    {
        cout << x << endl;
    }

    return 0;
}