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

int sizeoftree(Node *root)
{
    if(root==nullptr)return 0;
    queue<Node*>q;
    q.push(root);
    int count = 0;
    while(q.empty()==false)
    {
        Node *curr = q.front();
        q.pop();
        count++;
        if(curr->left!=nullptr) q.push(curr->left);
        if(curr->right!=nullptr) q.push(curr->right);
    }
    return count;
    

}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->right->left = new Node(50);
    root->right->right = new Node(60);
    root->right->right->left = new Node(70);
    cout << sizeoftree(root);
    return 0;
}
