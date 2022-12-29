#include<bits/stdc++.h>

using namespace std;

bool power(int num, int n)
    {
        if(num==n) return true;
        if(num>n) return false;
        else return power(4*num,n);
    }
bool isPowerOfFour(int n) {
        return power(4,n);
    }


int main()
{
    cout << isPowerOfFour(5);
}