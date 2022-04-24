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
    printlist(head);

    return 0;

}