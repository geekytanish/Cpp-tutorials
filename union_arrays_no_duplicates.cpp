#include<iostream>
#include<vector>
using namespace std;

int union_array(vector<int>arr, vector<int> brr){
    vector<int>urr;

    for(int i=0; i<arr.size(); i=i+1){
        urr.push_back(arr[i]);
    }
    for(int i=0; i<brr.size(); i=i+1){
        urr.push_back(brr[i]);
    }
    for(int i=0; i<urr.size(); i=i+1){
        cout<<urr[i]<<" ";
    }

}

int main(){
    vector<int>arr{2,4,6,8};
    vector<int>brr{1,3,7};
    
    union_array(arr, brr);
}
