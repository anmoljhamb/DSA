#include <iostream>
using namespace std;


bool is_odd(int number)
{
    // we just need to check if the last bit is 1 or 0
    // for example, if we have 3, it'll be 11, and 11 & 01 would be 1, meaning
    // the number is odd.
    // number&1 would be true if number is odd, 0 if even.
    return number&1;
}


int main()
{
    int number = 9;
    if ( is_odd(number) )
    {
        cout << "Number is odd.";
    }
    else
    {
        cout << "Number is even.";
    }
    cout << endl;
    return 0;
}