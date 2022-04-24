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

Node *DeleteHead(Node *head)
{
    if(head==nullptr)
    {
        return nullptr;
    }
    else if( head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    else
    {
        Node * newhead = head->next;
        head->next->prev = nullptr;
        delete head;
        return newhead;
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
    head = DeleteHead(head);
    printlist(head);
    

    return 0;

}