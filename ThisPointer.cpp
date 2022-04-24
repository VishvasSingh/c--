#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student{
    int c; 
    public:

    
    void SetData(int a)
    {
        this->c=a; // this pointer points to the object fow which the function is being called. 
        // here the arrow pointer will dereference this pointer, which means that whichever object is calling SetData function, c variable of that function will be set equal to a. 
    }
    void GetData()
    {
        cout << "The value is: " << c << endl;
    }
};

int main(){

    Student s,q,p,r;
    s.SetData(5);
    s.GetData();
    r.SetData(9);
    r.GetData();


    return 0;

}