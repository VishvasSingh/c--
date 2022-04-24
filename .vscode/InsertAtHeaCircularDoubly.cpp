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


Node *InsertAtHead(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==nullptr)
    {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    temp->next = head;
    head->prev->next = temp;
    head->prev = temp;
    return temp;
}


void printlist(Node *head)
{
    Node *curr = head;
    do 
    {
        cout << curr->data << endl;
        curr = curr->next; 
    } while(curr!=head);
    if(curr==head)
    {
        cout << "End of Result" << endl;
    }
}


int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    head->next->prev = head;
    head->next->next->prev = head->next;
    head->next->next->next->prev = head->next->next;
    head->next->next->next->next->prev = head->next->next->next;

    cout << head->next->next->data << endl;
    cout << head->next->next->next->prev->data << endl << endl;

    head = InsertAtHead(head,55);
    printlist(head);

    return 0;

}