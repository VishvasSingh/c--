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

Node *DeleteHead(Node *head)
{
   
    if(head==nullptr)
    {
        return nullptr;
    }
    else if(head->next == head)
    {
        delete head;
        return nullptr;
    }
    head->data = head->next->data;
    
    Node * temp = head->next; 
    head->next = head->next->next;
    
    delete temp;
    return head;



}

Node *DeleteElement(Node *head, int k)
{
   
    if(head==nullptr)
    {
        return nullptr;
    }

    if(k==1)
    {
        return DeleteHead(head);
    }

    Node * curr = head;
    for(int i=0; i<k-2; i++)
    {
        curr = curr->next;
    }
    
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
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
    head = DeleteElement(head,2);
    printlist(head);

    return 0;

}