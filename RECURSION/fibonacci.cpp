#include <iostream>
using namespace std;


int fibonacci(int n)
{
    if ( n < 0 )
        return -1;
    if ( n <= 1 )
    {
        // means n is either 0 or 1
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}


int main()
{
    int number; 
    cout << "Enter the number n: ";
    cin >> number; 
    cout << "The nth fibonacci number is: " << fibonacci(number) << endl;
    return 0;
}