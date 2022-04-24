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

Node *SortedInsert(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==nullptr)
    {
        return temp;
    }
    else if(x < head->data)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while(curr->next->data<x && curr->next!=nullptr)
    {
        curr= curr->next;
    }
    temp->next = curr->next;
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
        cout << "End of result" << endl;
    }
}

int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = SortedInsert(head,55);  // Doubt, why element is not getting inserted at the end ??
    printlist(head);
    

    return 0;

}