#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

}; // arrow operator is used to dereference the pointer....
int main(){
    // Complex c1;
    // Complex *ptr = &c1; 
    Complex *ptr = new Complex;
    // (*ptr).setData(1, 54); is exactly same as
    ptr->setData(1, 54); // here the arrow operator will derefence ptr and it will run the function set data.

    // (*ptr).getData(); is as good as 
    ptr->getData(); 


    // Array of Objects
    Complex *ptr1 = new Complex[4]; 
    ptr1->setData(1, 4); 
    ptr1->getData();
    return 0;
}