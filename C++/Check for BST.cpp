#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};

class Solution
{
public:
    // Function to check whether a Binary Tree is BST or not.
    int buffer = -1, flag = true;

    bool isBST(Node *root)
    {

        if (!flag)
            return false;

        if (root->left)
            isBST(root->left);

        if (buffer != -1 && buffer >= root->data)
            flag = false;
        else
            buffer = root->data;

        if (root->right)
            isBST(root->right);

        return flag;
    }
};

// Input 2 1 3
// Output 1

// Input 2 2 2 N N N N
// Output 0

// https://practice.geeksforgeeks.org/problems/check-for-bst/