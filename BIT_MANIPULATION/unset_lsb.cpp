#include <iostream>
using namespace std;


int unset_lsb(int number)
{
    // for example, if we have 111, we will just bitwise and (&) with 
    // n-1. 111 & 110, would be 110
    number = number&(number-1);
    return number;
}


int main()
{
    cout << unset_lsb(16) << endl;
    cout << unset_lsb(15) << endl;
    return 0;
}