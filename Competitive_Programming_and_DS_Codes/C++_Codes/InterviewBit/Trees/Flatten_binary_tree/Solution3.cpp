// https://www.interviewbit.com/problems/flatten-binary-tree-to-linked-list/

// https://www.geeksforgeeks.org/flatten-a-binary-tree-into-linked-list/

// https://leetcode.com/problems/flatten-binary-tree-to-linked-list/

#include <iostream>
#include <bits/stdc++.h>

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *newNode(int data)
{
    Node *root = new Node;
    root->data = data;
    root->left = NULL;
    root->right = NULL;

    return root;
}

void flatten(Node *root)
{
    if (!root) return;
    
        flatten(root->left);

        flatten(root->right);

        if (root->left) 
        {
            Node* right = root->right;
            root->right = root->left;
            root->left = NULL;
            while (root->right) root = root->right;
            root->right = right;
        }
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(7);
    root->right->right = newNode(6);

    flatten(root);

    inOrder(root);

    return 0;
}

// Time Complexity - O(n)
