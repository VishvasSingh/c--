#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct myhash{


    int *arr;
    int cap,size;
    myhash(int c)
    {
        cap = c;
        size = 0;
        for (int i=0; i<cap; i++)
        {
            arr[i] = -1;
        }

    }
    int hash(int key)
    {
        return key%cap;
    }

    bool search(int key)
    {
        int h = hash(key);
        int i =h;
        while(i!=-1)
        {
            if (arr[i]==key)
            {
                cout << "true";
                return true;
            }
            i = (i+1)%cap;
            if(i==h)
            return false;
        }
        return false;
    }

    bool insert(int key)
    {
        int h = hash(key);
        int i = h;
        if(size==cap)
        {
            return false;
        }
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
        {
            i = (i+1)%cap;
        }
        if(arr[i]==key)
        return false;
        else
        {
            arr[i] = key;
            size++;
            return true;

        }
    }
    bool erase(int key)
    {
        int h = hash(key);
        int i = h;
        while(arr[i]!=-1)
        {
            if(arr[i]==key)
            {
                arr[i] = -2;
                return true;
            }
            i = (i+1)%cap;
            if(i==h)
            {
                return false;
            }
        }
        return false;
    }

};


int main(){

    myhash mh(7);
    mh.insert(45);
    mh.insert(33);
    mh.insert(34);
    mh.insert(66);
    mh.insert(12);
    mh.search(33);

    return 0;

}