#include <iostream>
#include "my_vector.h"
using namespace std;


int main()
{
    vector<int> sample(12, 9);
    sample.print();
    sample.push_back(10);
    sample.push_back(11);
    sample.push_back(12);
    sample.print();
    cout << sample.get_size() << endl;
    cout << sample.get_capacity() << endl;
    sample.pop();
    sample.pop();
    sample.print();
    return 0;
}