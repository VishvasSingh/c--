#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
    data = x;
    next = nullptr;
    prev = nullptr;
}
};

Node *insertbegin(Node *head, int x)
{
    Node *newhead = new Node(x);
    head->prev = newhead;
    newhead->next = head;
    newhead->prev = nullptr;
    return newhead;
}

void printlist(Node *head)
{
    Node *curr = head;
     while(curr!=nullptr)
    {
        cout << curr->data << endl;
        curr = curr->next; 
    }
    if(curr==nullptr)
    {
        cout << "End of Result" << endl;
    }
}

int main(){

    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp1->prev = head;

    head = insertbegin(head,50);
    printlist(head);
    

    return 0;

}