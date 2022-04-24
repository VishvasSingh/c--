#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next; // we have created a self referencing structure. We have created a pointer next whose data type is same as structure
    Node(int x) // we have  created a constructor here. 
    {
        value = x; // first we will set the value 
        next = nullptr; // also we intially set all the pointers equal to null pointer
    }

};


int main(){

    Node *head = new Node(10); // this will set the value equal to 10, and head pointer equal to null pointer
    Node *temp1 = new Node(20); // this will set the value equal to 20 and next pointer equal to null pointer
    Node * temp2 = new Node(30);
    head->next = temp1; // we are dereferncing the head pointer and  the next varibale in head will now store the location of temp1
    temp1->next = temp2;
    cout << temp1->value; // this and next statement will print the same outputs
    cout<< head->next->value; // this will first go to next variable of head pointer, where it will find the address of temp1 and then again it will dereference it and go to the value 

    return 0;

}