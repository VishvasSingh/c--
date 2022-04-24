#include<iostream>
using namespace std;

class Employee
{
    public:
    int id;
    void GetId()
    {
        cout << "Enter The id Of Employee" << endl;
        cin >> id;
    }

    void SetId()
    {
        cout << "The id of employee is : " << id << endl;
    }
};


int main()
{
    Employee ep[5];
    for(int i=0; i<5; i++)
    { 
        ep[i].GetId();
        ep[i].SetId();
    }
}