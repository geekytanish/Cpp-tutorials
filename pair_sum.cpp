#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;


int pair_sum(vector<int>arr, vector<int>brr){

    if(arr.size()>brr.size()){
        for(int i=0; i<brr.size(); i=i+1){
            for(int j=0; j<arr.size(); j=j+1){
                if(brr[i]+arr[j]==9){cout<<brr[i]<<" + "<<arr[j]<<" = "<<" 9"<<endl;}
            }
        }
    }
 
    else{
        for(int i=0; i<arr.size(); i=i+1){
            for(int j=0; j<brr.size(); j=j+1){
                if(brr[j]+arr[i]==9){cout<<brr[j]<<" + "<<arr[i]<<" = "<<" 9"<<endl;}
            }
        }
    }
}

int main(){
    vector<int>arr{2,4,6,8};
    vector<int>brr{1,2,3,7};
    pair_sum(arr,brr);
}
