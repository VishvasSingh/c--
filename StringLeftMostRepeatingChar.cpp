#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "wareyougenthleman";
    int chara[26] = {0};
    for(int i=0; i<s.length();i++)
    {
        chara[s[i]-'a']++;
    
    }
    for(int i=0; i<s.length();i++)
    {
        if(chara[s[i]-'a']==2)
        {
            cout << s[i];
            break;
        }
    }

    return 0;

}