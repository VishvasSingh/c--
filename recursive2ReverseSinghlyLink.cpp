#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
    data = x;
    next = nullptr;
}
};

Node *recrev(Node *curr, Node *prev)
{
    if(curr==nullptr)
    {
        return prev;
    }
    Node *next = curr->next;
    curr->next = prev;
    recrev(next,curr);

    
}

void printlis(Node *head)
{
    Node *curr = head;
    while(curr!=nullptr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printlis(head);
    head = recrev(head,nullptr);
    printlis(head);

    return 0;

}