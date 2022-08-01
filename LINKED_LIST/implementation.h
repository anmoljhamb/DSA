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
        if ( head == NULL )
        {
            Node* n = new Node(data);
            head = tail = n;
            return;
        }
        Node* n = new Node(data);
        n -> next = head;
        head = n;
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