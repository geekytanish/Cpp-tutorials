#include<iostream>
#include<vector>
#include<array>
#include<limits.h>
using namespace std;

void rotate(vector<int>srr){
    for(int i=0; i<srr.size(); i=i+1){
        if(i==0){
            continue;
        }
        else if(i==srr[srr.size()-1]){swap(srr[0], srr[srr.size()-1]);}

        else{
            swap(srr[i], srr[i-1]);
        }
    }

    for(auto value: srr){
        cout<<value<<" ";
    }
    cout<<endl;
    for(int i=0; i<srr.size(); i=i+1){
        cout<<srr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Size Of Array: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i=i+1){
        cout<<"Enter "<<i<<"th element: ";
        cin>>arr[i];
    }
    rotate(arr);
}
