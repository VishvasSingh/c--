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

int main(){

    /* Node *head = new Node(10);
    head -> prev = nullptr;
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(40);
    head->next->next->next->prev = head->next->next;
    cout << head->next->next << endl;
    cout << head->next->next->next->prev; */

    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2  = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp1->prev = head;
    temp2->prev = temp1;

    cout << temp2->prev->data << endl; // all the cout will print the same value as they are pointing to the same place.
    cout << temp1->data << endl;
    cout << head->next->data;
    

    return 0;

}