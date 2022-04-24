#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<string,int> map; // unordered map is based on hashing, it is used to store key-value pairs
    /*map["hello"] = 5;
    map["name"] = 6;
    map.insert({"age",19});
    for(auto x:map) // auto keyword will automtically take the variable type, user does'nt have to specify
    {
        cout << x.first << " " << x.second << endl; // there is no order in an unordered map, hence pairs can be printed in any order
    }
    */

   map["hello"] = 5;
   map["how"] = 12;
   map["are"] = 16;
   map["you"] = 25;
   if(map.find("gentleman") != map.end()) // map.find will return iterator if found, otherwise it will find iterator after last pair of map
   // we can also create an iterator and use it, auto it = map.find("gentleman" -----> this statement is also valid and we can check for it != map.end()
   {
       cout << "found" << endl;
   }
   else 
   cout << "not found" << endl;

   for(auto it=map.begin(); it!=map.end(); it++) // here it is an iterator with initial value starting from first and going till last pair 
   {
       cout << it->first << " = " << it->second << endl;
   }

    return 0;

}