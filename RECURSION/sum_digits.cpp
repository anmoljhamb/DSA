#include <iostream>
using namespace std;


// Sum of digits of a given number

int ans(int number, int sum=0)
{
    if ( number == 0 )
        return sum;
    sum += number % 10;
    return ans(number/10, sum);
}


int main()
{
    cout << ans(12345);
    return 0;
}