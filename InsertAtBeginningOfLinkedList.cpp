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

Node *insert(Node *head, int x)
{

    Node *newhead = new Node(x);
    newhead->next = head;
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
}

int main(){

    Node *head = nullptr;
    head = insert(head,10);
    head = insert(head,20);
    head = insert(head,12);


    printlist(head);

    

    return 0;

}