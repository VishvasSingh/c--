#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct hashmap{
    int bucket;
    list<int> *table;
    hashmap(int b)
    {
        bucket = b;
        table = new list<int>[bucket];    
    }
    void insert(int x)
    {
        int k = x%bucket;
        table[k].push_back(x);
    }
    int search(int x)
    {
        int k = x%bucket;
        for(auto y:table[k])
        {
            if(y==x) return true;
        }
        return false;
    }
    void del(int x)
    {
        int k = x%bucket;
        table[k].remove(x);
    }


};


int main(){

    struct hashmap hp(7);
    hp.insert(20);
    hp.insert(22);
    hp.insert(667);
    hp.insert(556);
    cout << hp.search(22);
    hp.del(22);
    cout << hp.search(22);

    return 0;

}