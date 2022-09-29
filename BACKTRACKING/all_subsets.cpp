#include <iostream>
#include <string>
using namespace std;


/*
Given a current string, abc, print out all the possible subsets of the given string. 
there would be 2^n subsets of a given string. 
*/


void print_all_subsets(string S, string temp="", int i=0)
{
    if( i == S.length() ) 
    {
        cout << temp << endl;
        return;
    }
    
    print_all_subsets(S, temp, i+1);
    
    temp += S[i];

    print_all_subsets(S, temp, i+1);

}



int main()
{
    print_all_subsets("abc");
    return 0;
}