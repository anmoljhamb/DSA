#include <iostream>
using namespace std;

class LinkedList;

class Node
{
private:
    int data;
    Node *next;

public:
    Node(int d)
    {
        this->data = d;
        this->next = nullptr;
    }

    Node(int d, Node *n)
    {
        this->data = d;
        this->next = n;
    }

    friend LinkedList;
};

class LinkedList
{
private:
    Node *head;
    int size = 0;

public:

    LinkedList()
    {
        head = nullptr;
    }

    void push_back(int data)
    {
        Node *temp = new Node(data);
        if (head == nullptr)
        {
            head = temp;
        }
        else
        {
            Node *t = head;
            while (t->next != nullptr)
            {
                t = t->next;
            }

            t->next = temp;
        }
        size++;
        return;
    }

    void push_front(int data)
    {
        Node* temp = new Node(data);
        if ( head == nullptr )
        {
            head = temp;
        }

        temp -> next = head;
        head = temp;

        size++;
        return;
    }

    void display()
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    int get_size()
    {
        return size;
    }

    
    void reverse()
    {
        Node* curr = head;
        Node* prev = nullptr;
        Node* temp = curr -> next;

        while ( curr != nullptr )
        {
            temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }

        head = prev;
    }

};

int main()
{
    LinkedList list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_front(0);
    list.push_front(-1);
    list.push_front(-2);

    list.display();
    list.reverse();
    list.display();

    return 0;
}