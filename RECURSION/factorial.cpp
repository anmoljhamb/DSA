#include <iostream>
using namespace std;


int factorial(int number)
{
    // f(n) = n*f(n-1)
    if ( number < 0 )
        return -1;
    if ( number <= 1 )
        return 1;
    return number*factorial(number-1);
}


int main()
{
    int number; 
    cout << "Enter the number: ";
    cin >> number; 
    cout << "The factorial of the number is: " << factorial(number) << endl;
    return 0;
}