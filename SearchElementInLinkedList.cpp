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

int search(Node *head, int x)
{
    int count =1;
    Node *curr = head;
    while(curr!=nullptr)
    {
    if((curr->data)==x)
    {
        return count;
    }
    else
    {
        count++;
        curr = curr->next;
    }
    
    }
    return 0;                                     
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
    cout << search(head,30);
    

    return 0;

}