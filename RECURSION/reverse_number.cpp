#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
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


// return int, by using an extra variable
int rev_number_1(int number, int sum=0)
{
    if ( number == 0 )
        return sum;
    
    sum = sum * 10 + number % 10;
    return rev_number_1(number/10, sum);
}


// display only
void print_number_back(int number)
{
    if ( number == 0 )
        return;

    cout << number%10;
    print_number_back(number/10);
}


// Using string
int rev_string(int number)
{
    string n = to_string(number);

    reverse(n.begin(), n.end());
    number = stoi(n);

    return number;
}


int main()
{
    int number = 123456;
    cout << rev_number(number) << endl;
    cout << rev_number_1(number) << endl;
    cout << rev_string(number) << endl;
    print_number_back(number);
    return 0;
}