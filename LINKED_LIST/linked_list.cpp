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

    list.dispaly();
    return 0;
}