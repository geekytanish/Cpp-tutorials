#include<iostream>
#include<bits/stdc++.h>
#include<limits.h>
#include<limits>

using namespace std;

int findMax(int arr[], int n, int i, int maxi){
    if(i>=n){return maxi;}
    maxi=max(maxi,arr[i]);
    findMax(arr, n, i+1, maxi);
}

int main(){
    int arr[]={10,30,21,44,32,17,19,5};

    int n=8;

    int maxi=INT_MIN;
    int i=0;
    int found=findMax(arr,n,i,maxi);

    cout<<"The max is: "<<found<<endl;
}
