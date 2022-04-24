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

Node *insertelement(Node *head,int pos, int data)
{
    Node *temp = new Node(data);
    if(pos==1)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    
    for(int i=1; i<=pos-2 && curr != nullptr; i++)
    {
        curr = curr->next;

    }
    if(curr==nullptr)
    {
        return head;
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
        cout << "End of Result" << endl;
    }
}

int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = insertelement(head,2,199);
    printlist(head);
    

    return 0;

}