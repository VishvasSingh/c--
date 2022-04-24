#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0) // if we would have written 1 then if someone would have passed 0 factorial as test case then there would have been a problem
    {
        return 1;
    }
    return n*fact(n-1);
}


int main(){

    int ans;

    ans = fact(6);
    cout << ans;
    return 0;

}