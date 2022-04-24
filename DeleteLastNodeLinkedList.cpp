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

Node *deletetail(Node *head)
{
    if(head==nullptr)
    {
        return nullptr;
    }
    if(head->next==nullptr)
    {
        delete head;
        return nullptr;
    }
    
    Node *curr = head;
    while(curr->next->next!=nullptr)
    {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = nullptr;
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

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = deletetail(head);
    printlist(head);
    

    return 0;

}