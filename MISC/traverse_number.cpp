#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



void traverse_from_back(int number)
{
    if ( number == 0 )
    {
        cout << endl;
        return;
    }
    cout << number % 10 << ", ";
    traverse_from_back(number/10);
}


void traverse_from_front(int number)
{
    if ( number == 0 )
    {
        return;
    }
    traverse_from_front( number / 10);
    cout << number % 10 << endl;
}


void travese_behind_iterative(int number)
{
    while ( number > 0 )
    {
        cout << number % 10 << ", ";
        number = number / 10;
    }
    cout << endl;
}


void traverse_by_converting(int number)
{
    string num = to_string(number);
    for ( auto ch : num )
        cout << (int(ch)-int('0'))*100 << ", ";
    cout << endl;

    // reverse 
    reverse(num.begin(), num.end());
    for ( auto ch : num )
        cout << (int(ch)-int('0'))*100 << ", ";
    cout << endl;
}



int main()
{
    int number = 12345;
    cout << "From back using recursion: " << endl;
    traverse_from_back(number);
    cout << "From front using recursion: " << endl;
    traverse_from_front(number);
    cout << "Using iterative function: " << endl;
    travese_behind_iterative(number);
    cout << "By converting it to a string: " << endl;
    traverse_by_converting(number);
    return 0;
}