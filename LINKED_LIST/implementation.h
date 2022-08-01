using namespace std;
// Forward declaration.
class LinkedList;

class Node
{
private:
    int data;
    Node *next;
public:
    Node(int d): data(d), next(NULL){}
    friend LinkedList;
};

class LinkedList
{
private:
    Node* head;
    Node* tail;
public:
    LinkedList(): head(NULL), tail(NULL){}
    void push_front(int data)
    {
        Node* n = new Node(data);
        if ( head == NULL )
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
        if ( head == NULL )
        {
            head = tail = n;
            return;
        }
        tail -> next = n;
        tail = n;
    }
    
    void dispaly()
    {
        Node* temp = head;
        while ( temp != NULL )
        {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << endl;
    }
};