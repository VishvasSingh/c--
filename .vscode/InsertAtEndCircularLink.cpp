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

Node *InsertatEnd(Node *head, int x)
{
   
  /* Node *newtail = new Node(x);  // this is naive way, O(N) time. 
    if(head == nullptr)
    {
        newtail->next = newtail;
        return newtail;
    }

   Node *curr = head;
   while(curr->next!=head)
   {
       curr = curr->next;
   }
   curr->next = newtail;
   newtail->next = head;
   return head; */


    Node *newtail = new Node(x);  // EFFICIENT WAT O(1) time. insert node after head and swap their data but return the same head node. 
    if(head == nullptr)
    {
        newtail->next = newtail;
        return newtail;
    }

    int y = head->data;
    head->data = newtail->data;
    newtail->data = y;
    newtail->next = head->next;
    head->next = newtail;
    return newtail;


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
    head = InsertatEnd(head,256);
    printlist(head);

    return 0;

}