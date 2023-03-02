#include<iostream>
#include<vector>
#include<array>
#include<limits.h>
using namespace std;

int main(){
    vector<int>arr(5);
    for(int x=0; x<5; x=x+1){
        cin>>arr[x];
    }
    for(int i=0; i<arr.size(); i=i+1){
        for(int j=i+1; j<arr.size();j=j+1){
            if(arr[i]>arr[j]){swap(arr[i], arr[j]);}
        }
    }
    for(auto value: arr){
        cout<<value<<" ";
    }
}
