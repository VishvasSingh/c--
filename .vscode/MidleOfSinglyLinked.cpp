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

void MiddleElement(Node *head) // this is efficient solution, which requires only one traversal as opposed to 2 traversal in naive approach
{
    Node *slow = head;
    Node *fast = head;
    while(fast->next != nullptr && fast!=nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    cout << slow->data << endl;
     
}

int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    head->next->next->next->next->next->next = new Node(70); //Doubt -- code not working for even number of elements
    MiddleElement(head);

    return 0;

}