#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}







class Solution
{
    public:
    //Function to add two numbers represented by linked list.
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
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = revlist(first);
        second =revlist(second);
        Node *ans = new Node(0);
        Node *final = ans;
        int cy = 0;
        Node *curr1 = first;
        Node *curr2 = second;
        while(curr1!=nullptr && curr2!=nullptr)
        {
            Node *temp = new Node(0);
            int x = curr1->data;
            int y = curr2->data;
            if( x+y+cy>= 10)
            {
                temp->data = (x+y+cy)%10;
                cy = 1;
            }
            else
            {
                temp->data = x+y+cy; 
            }
            curr1 = curr1->next;
            curr2= curr2->next;
            final->next = temp;
            final = final->next;
        }
        if(curr1==nullptr)
        {
            while(curr2!=nullptr)
            {
                if(cy==1)
                {
                    int x = curr2->data;
                    x = x+cy;
                    if(x>=10)
                    {
                        curr2->data = x%10;
                        cy = 1;
                    }
                }
            final->next = curr2;
            curr2 = curr2->next;
            final = final->next;
            }
        }
        if(curr2==nullptr)
        {
            
            while(curr1!=nullptr)
            {
                if(cy==1)
                {
                    int x = curr1->data;
                    x = x+cy;
                    if(x>=10)
                    {
                        curr1->data = x%10;
                        cy = 1;
                    }
                    else cy = 0;
                }
                final->next = curr1;
                curr1 = curr1->next;
                final = final->next;
            }
        }
       /* if(curr1==nullptr && curr2!=nullptr)
        {
            while(curr2!=nullptr)
            {
                int x = curr2->data;
                Node *temp = new Node(x);
                final->next = temp;
                final = final->next;
            }
        }*/
        /*if(curr2==nullptr && curr1!=nullptr)
        {
            while(curr1!=nullptr)
            {
                int x = curr1->data;
                Node *temp = new Node(x);
                final->next = temp;
                final = final->next;
            }
        }*/
        ans = ans->next;
        ans = revlist(ans);
        return ans;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}