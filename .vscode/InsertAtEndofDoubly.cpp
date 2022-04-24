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

Node *Insertatend(Node *head, int x)
{
    if(head==nullptr)
    {
        Node *last = new Node(x);
        head = last;
        return head;
    }
    else{
    Node *curr = head;
    Node *last = new Node(x);
    while(curr->next!=nullptr)
    {
        curr = curr->next;
    }
    curr->next = last;
    last->prev = curr;
    last->next = nullptr;
    return head;
    }
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
    
    head = Insertatend(head,60);
    printlist(head);
    

    return 0;

}