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


void preorder_traversal(Node *node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    preorder_traversal(node->left);
    preorder_traversal(node->right);
    return;
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


int height_of_tree(Node* head, int i)
{
    if ( head == nullptr )
        return i;
    
    int left, right;

    left = height_of_tree(head -> left, i+1);
    right = height_of_tree(head -> right, i+1);

    return max(left, right);
}


int main()
{

    queue<int> arr;

    int temp[] = {1, 2, 4, -1, -1, -1, 3, 5, 6, -1, 7};
    int n = sizeof(temp)/sizeof(int);

    for ( int i=0; i<n; i++ )
    {
        arr.push(temp[i]);
    }


    Node *head = build_tree_from_arr(arr);
    preorder_traversal(head);
    cout << endl;

    // cout << height_of_tree(head, 1);

    return 0;
}