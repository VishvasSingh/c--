#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void maxHeapify(int arr[],int n, int i)
{
    int largest = i, left=2*i+1,right=2*i+2;
    if(left<n && arr[largest]<arr[left]) largest = left;
    if(right<n && arr[largest]<arr[right]) largest = right;
    if(i!=largest)
    {
        swap(arr[i],arr[largest]);
        maxHeapify(arr,n,largest);
    }

}

void buildheap(int arr[], int n)
{
    for(int i=(n-2)/2; i>=0;i--)
    {
        maxHeapify(arr,n,i);
    }
}

void heapsort(int arr[], int n)
{
    buildheap(arr,n);
    for(int i=n-1; i>=1; i--)
    {
        swap(arr[0],arr[i]);
        maxHeapify(arr,i,0);
    }
}

int main(){

    int n; 
    cout << " Enter Size of array " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array Elements" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    heapsort(arr,n);

    cout << " Sorted array is " << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

}