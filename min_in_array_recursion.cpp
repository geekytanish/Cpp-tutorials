#include<iostream>
#include<bits/stdc++.h>
#include<limits.h>
#include<limits>

using namespace std;

int findMax(int arr[], int n, int i, int mini){
    if(i>=n){return mini;}
    mini=min(mini,arr[i]);
    findMax(arr, n, i+1, mini);
}

int main(){
    int arr[]={10,3,21,44,32,17,19,5};

    int n=8;

    int mini=INT_MAX;
    int i=0;
    int found=findMax(arr,n,i,mini);

    cout<<"The min is: "<<found<<endl;
}
