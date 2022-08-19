#include <iostream>
#include <math.h>
using namespace std;

// util functions
int len(int number)
{
    // returns the length of a given number
    return log10(number)+1;
}

// reverse a given number 
// this is to get a given number to be used in other stuff
int rev_number(int& number)
{
    if ( (number % 10) == number )
        return number;
    int last = number % 10;
    int remaining = number / 10;
    int l = len(remaining);
    return last*pow(10, l) + rev_number(remaining);
}


// display only
void print_number_back(int number)
{
    if ( number == 0 )
        return;

    cout << number%10;
    print_number_back(number/10);
}



int main()
{
    int number = 123456;
    cout << rev_number(number) << endl;
    print_number_back(number);
    return 0;
}