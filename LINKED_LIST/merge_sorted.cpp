#include <iostream>
using namespace std;

class LinkedList;

class Node
{
private:
    int data;
    Node *next;

public:
    Node(int d) : data(d), next(nullptr) {}
    friend LinkedList;
};

class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList() : head(nullptr), tail(nullptr) {}
    void push_front(int data)
    {
        Node *n = new Node(data);
        if (head == nullptr)
        {
            head = tail = n;
            return;
        }
        n->next = head;
        head = n;
    }

    void push_back(int data)
    {
        Node *n = new Node(data);
        if (head == nullptr)
        {
            head = tail = n;
            return;
        }
        tail->next = n;
        tail = n;
    }

    void pop_front()
    {
        Node *temp;
        temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
    }

    void pop_back()
    {
        Node *temp = head;
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    void dispaly()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }

    int top()
    {
        return head->data;
    }


    bool empty()
    {
        return head == nullptr;
    }
};

int main()
{
    LinkedList list1, list2;

    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);

    cout << "List 1: ";
    list1.dispaly();

    list2.push_back(2);
    list2.push_back(4);
    list2.push_back(6);
    list2.push_back(8);
    list2.push_back(10);

    cout << "List 2: ";
    list2.dispaly();


    LinkedList merged_list;
    while ( (!list1.empty()) && (!list2.empty()) )
    {
        if ( list1.top() < list2.top() )
        {
            merged_list.push_back(list1.top());
            list1.pop_front();
        }

        else
        {
            merged_list.push_back(list2.top());
            list2.pop_front();
        }
    }


    while ( !list1.empty() )
    {
        merged_list.push_back(list1.top());
        list1.pop_front();
    }

    while ( !list2.empty() )
    {
        merged_list.push_back(list2.top());
        list2.pop_front();
    }

    cout << "The merged sorted linked list: ";
    merged_list.dispaly();

    return 0;
}