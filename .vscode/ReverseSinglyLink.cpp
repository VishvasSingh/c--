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

/*Node *ReverseSingly(Node *head)
{
    Node *curr = head;
    Node *prev = nullptr;
    while(curr!=nullptr)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}*/
struct Node* revlist(Node *head)
    {
        if(head==nullptr || head->next==nullptr)
        {
            return head;
        }
        Node *temp = nullptr;
        Node *prev = nullptr;
        Node *curr = head;
        while(curr!=nullptr)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
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
    head = revlist(head);
    printlist(head);
    

    return 0;

}