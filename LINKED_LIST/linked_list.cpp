#include <iostream>
#include "implementation.h"
using namespace std;

int main()
{
    LinkedList list;
    list.push_front(0);
    list.push_front(1);
    list.push_front(2);
    list.push_front(3);
    list.push_back(-1);

    list.dispaly();
    list.pop_front();
    list.pop_front();
    list.dispaly();
    list.pop_back();
    list.pop_back();
    list.dispaly();

    
    return 0;
}