#include<iostream>
#include<vector>
#include<array>
#include<limits.h>
using namespace std;

int sort_zeroes_ones(vector<int>arr){

    for(int i=0; i<arr.size(); i=i+1){
        for(int j=i; j<arr.size(); j=j+1){
            if(arr[i]>arr[j]){swap(arr[i], arr[j]);}
        }
    }
    for(int i=0; i<arr.size(); i=i+1){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int>arr{0,1,1,0,1,0,1,0,0};

    sort_zeroes_ones(arr);
}
