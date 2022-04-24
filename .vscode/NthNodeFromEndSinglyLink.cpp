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

void KthElement(Node *head, int k)
{
    if(head==nullptr)
    {
        return;
    }
    Node *first = head;
    Node *second = head;
    for(int i=0; i<k;i++)
    {
        if(first==nullptr)
        {
            return;
        }
        first = first->next;
    }
    while(first!=nullptr)
    {
        first = first->next;
        second = second->next;
    }
    cout << second->data<< endl;
}

int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    KthElement(head,2);

    return 0;

}