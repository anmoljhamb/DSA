#include <iostream>
using namespace std;


bool is_power_of_two(int number)
{
    // n&(n-1) unsets the lsb, but in case of 2^n, there is only
    // 1 set bit, which unsets it, so we can compare it to 0;
    return (((number&(number-1)) == 0) && (number != 1));
}


int main()
{
    cout << is_power_of_two(2) << endl;
    cout << is_power_of_two(4) << endl;
    cout << is_power_of_two(8) << endl;
    cout << is_power_of_two(3) << endl;
    cout << is_power_of_two(5) << endl;
    cout << is_power_of_two(1) << endl;
    return 0;
}