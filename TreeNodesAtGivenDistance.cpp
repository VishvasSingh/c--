#include<iostream>
#include<bits/stdc++.h>
using namespace std;



struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = nullptr;
    }

};

void printNodes(Node *root, int k)
{
    if(root==nullptr)
    {
        return;
    }
    if(k==0)
    {
        cout << root->key << " ";
    }
    else{
        printNodes(root->left,k-1);
        printNodes(root->right,k-1);
    }

}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->right->left = new Node(50);
    root->right->right = new Node(60);
    
    printNodes(root,2);
    return 0;
}
