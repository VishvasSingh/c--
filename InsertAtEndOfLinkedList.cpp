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

Node *insertatend(Node *head, int x)
{
    Node * temp = new Node(x);
    if(head == nullptr)
    {
        return temp;
    }
    Node * curr = head;

    while(curr->next != nullptr)
        {
            curr = curr->next;
        }
        curr->next = temp;
    return head;

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

    Node *head = nullptr;
    head = insertatend(head,10);
    head = insertatend(head,20);
    head = insertatend(head,12);
    head = insertatend(head,46);


    printlist(head);

    return 0;

}