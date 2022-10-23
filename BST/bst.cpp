#include <iostream>
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

int main()
{

    Node *head = build_tree();
    preorder_traversal(head);
    cout << endl;
    inorder_traversal(head);
    cout << endl;
    postorder_traversal(head);
    cout << endl;

    return 0;
}