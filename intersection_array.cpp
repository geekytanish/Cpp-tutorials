#include<iostream>
#include<vector>

using namespace std;

int intersection(vector<int>arr, vector<int>brr){
    
    vector<int>irr;

    if(arr.size()>brr.size()){
        for(int i=0; i<brr.size(); i=i+1){
            for(int j=0; j<arr.size(); j=j+1){
                if(brr[i]==arr[j]){irr.push_back(brr[i]);}
            }
        }
    }
 
    else{
        for(int i=0; i<arr.size(); i=i+1){
            for(int j=0; j<brr.size(); j=j+1){
                if(brr[i]==arr[j]){irr.push_back(brr[i]);}
            }
        }
    }

    for(int i=0; i<irr.size(); i=i+1){
        cout<<irr[i]<<" ";
    }
}

int main(){
    vector<int>arr{2,4,6,8};
    vector<int>brr{1,2,3,7};

    intersection(arr,brr);
    return 0;
}
