#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder_traversal(Node *node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    preorder_traversal(node->left);
    preorder_traversal(node->right);
}

void inorder_traversal(Node *node)
{
    if (node == NULL)
        return;

    inorder_traversal(node->left);
    cout << node->data << " ";
    inorder_traversal(node->right);
}

void postorder_traversal(Node *node)
{
    if (node == NULL)
        return;

    postorder_traversal(node->left);
    postorder_traversal(node->right);
    cout << node->data << " ";
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(9);
    /* 4 becomes left child of 2
              1
            /    \
           2      3
          / \     / \
         4   9  NULL NULL
        / \
      NULL NULL
    */

    // preorder traversal
    cout << "Preorder traversal: ";
    preorder_traversal(root);

    // inorder traversal
    cout << "\nInorder traversal: ";
    inorder_traversal(root);

    // postorder traversal
    cout << "\nPostorder traversal: ";
    postorder_traversal(root);

    return 0;
}