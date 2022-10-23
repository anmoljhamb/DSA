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

Node *build_tree()
{
    // constructs a binary tree using the preorder traversal.
    int d;
    cin >> d;

    if (d == -1)
        return NULL;

    Node *node = new Node(d);
    node->left = build_tree();
    node->right = build_tree();

    return node;
}

void preorder_traversal(Node *node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    preorder_traversal(node->left);
    preorder_traversal(node->right);
    return;
}

void inorder_traversal(Node *node)
{
    if (node == NULL)
        return;

    inorder_traversal(node->left);
    cout << node->data << " ";
    inorder_traversal(node->right);
    return;
}

void postorder_traversal(Node *node)
{
    if (node == NULL)
        return;

    postorder_traversal(node->left);
    postorder_traversal(node->right);
    cout << node->data << " ";
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


int main()
{

    queue<int> arr;

    int temp[] = {1, 2, -1, -1, 3, -1, -1};
    int n = sizeof(temp)/sizeof(int);

    for ( int i=0; i<n; i++ )
    {
        arr.push(temp[i]);
    }


    Node *head = build_tree_from_arr(arr);
    preorder_traversal(head);
    cout << endl;
    inorder_traversal(head);
    cout << endl;
    postorder_traversal(head);
    cout << endl;

    return 0;
}