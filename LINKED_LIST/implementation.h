using namespace std;
// Forward declaration.
class LinkedList;

class Node
{
private:
    int data;
    Node *next;
public:
    Node(int d): data(d), next(nullptr){}
    friend LinkedList;
};

class LinkedList
{
private:
    Node* head;
    Node* tail;
public:
    LinkedList(): head(nullptr), tail(nullptr){}
    void push_front(int data)
    {
        Node* n = new Node(data);
        if ( head == nullptr )
        {
            head = tail = n;
            return;
        }
        n -> next = head;
        head = n;
    }


    void push_back(int data)
    {
        Node* n = new Node(data);
        if ( head == nullptr )
        {
            head = tail = n;
            return;
        }
        tail -> next = n;
        tail = n;
    }


    void pop_front()
    {
        Node* temp;
        temp = head;
        head = head -> next;
        temp -> next = nullptr;
        delete temp;
    }


    void pop_back()
    {
        Node* temp = head;
        while ( temp -> next -> next != nullptr )
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = nullptr;
    }

    
    void dispaly()
    {
        Node* temp = head;
        while ( temp != nullptr )
        {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << endl;
    }
};