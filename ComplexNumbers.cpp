#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;
    public:
     void setData()
     {
         cout << "Enter real part" << endl;
         cin >> a;
         cout << "Enter Imaginary part" << endl;;
         cin >> b;
     }
     void getData()
     {
         cout << "Complex Number is: " << a << "+" << b << "i" << endl;
     }

     void sumofcomplex(Complex c1, Complex c2)
     {
         a = c1.a + c2.a;
         b = c1.b + c2.b;
     }

    

};

int main(){

    Complex comp;
    comp.setData();
    comp.getData();
    comp.sumofcomplex(comp,comp);
    comp.getData();   

    return 0;

}