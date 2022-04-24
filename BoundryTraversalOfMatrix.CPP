#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void boundry(vector<vector<int>>&arr, int n, int m)
{
    int i=0;
    int j = 0;
    while(j<m)
    {
        cout << arr[i][j] << " ";
        j++;
    }
    cout << endl;
    while(i<n)
    {
        cout << arr[i][j] << " ";
        i++;
    }
    cout << endl;
    while(j>=0)
    {
        cout << arr[i][j] << " ";
        j--;
    }
    cout << endl;
    while(i>=1)
    {
        cout << arr[i][j] << " ";
        i--;
    }


}





int main(){

    int n,m;
    cin >> n;
    cin >> m;
    vector<vector<int>>arr;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> arr[i][j];
        }
    }
    boundry(arr,n,m);
    




    return 0;

}