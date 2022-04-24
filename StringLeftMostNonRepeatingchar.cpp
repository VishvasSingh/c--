#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

      string s;
     cin >> s;
    int chara[26];
    fill(chara,chara+26,-1);
    int res = INT_MAX;
    for(int i=0; i<s.length();i++)
    {
        if(chara[s[i]-'a']==-1)
        {
            chara[s[i]-'a'] = i;
        }
        else 
        {
            chara[s[i]-'a'] = -2;
        }

    }
    for(int i=0; i<26;i++)
    {
       if(chara[s[i]-'a']>=0)
        res = min(res,chara[s[i]-'a']);
    }

    cout << s[res];


    return 0;


    return 0;

}