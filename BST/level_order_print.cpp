#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d) : data(d), left(NULL), right(NULL)
    {
    }
};


void levelorder_traversal(Node *node)
{
    queue<Node*> arr;

    Node* temp = node;
    arr.push(temp);
    arr.push(nullptr);

    while ( !arr.empty() )
    {
        Node* curr = arr.front();        
        arr.pop();

        if ( arr.empty() )
            break;
        if ( curr != nullptr )
        {
            if ( curr -> left != nullptr )
                arr.push(curr -> left);
            if ( curr -> right != nullptr )
                arr.push(curr -> right);
            cout << curr -> data << " ";
        }
        else
        {
            arr.push(nullptr);
            cout << endl;
        }
        temp = arr.front();
    }

}


Node* build_tree_from_arr(queue<int> &arr)
{

    int d = arr.front();
    arr.pop();

    if ( d == -1 )
        return NULL;
    
    Node* node = new Node(d);
    node -> left = build_tree_from_arr(arr);
    node -> right = build_tree_from_arr(arr);
    return node;
}


int main()
{

    queue<int> arr;

    int temp[] = {1, 2, 4, -1, -1, -1, 3, 5, -1, -1, 6, -1, 7, -1, -1};
    int n = sizeof(temp)/sizeof(int);

    for ( int i=0; i<n; i++ )
    {
        arr.push(temp[i]);
    }


    Node *head = build_tree_from_arr(arr);
    levelorder_traversal(head);
    cout << endl;

    return 0;
}