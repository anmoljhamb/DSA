#include <iostream>
#include <string>
using namespace std;


void display_all(string S, int idx=0)
{
    if ( idx == S.length() )
    {
        cout << S << endl;
        return;
    }
    
    for ( int i=idx; i<S.length(); i++ )
    {
        swap(S[i], S[idx]);
        display_all(S, i+1);
        swap(S[i], S[idx]);
    }
}


int main()
{
    display_all("abc");
    return 0;
}