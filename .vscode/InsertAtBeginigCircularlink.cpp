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

Node *Inserthead(Node *head, int x)
{
    /* Node *temp = new Node(x);  // this is naive way of inserting, O(N) time, we can either maintain a tail pointer, or swap the data of new node with head node to make it more efficient
    if(head==nullptr)
    {
        temp->next = temp;
        return temp;
    }
    temp->next = head;
    Node *curr = head;
    while(curr->next!=head)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return temp; */

    Node *temp = new Node(x);  // in this method we are swaping the data of newly inserted node and head node
    if(head==nullptr)
    {
        temp->next = temp;
        return temp;
    }
    int y = head->data;  // next 3 lines will swap the data of temp and head. 
    head->data = temp->data;
    temp->data = y;
    temp->next = head->next;  
    head->next = temp; 
    return head;

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
    head = Inserthead(head,256);
    printlist(head);

    return 0;

}