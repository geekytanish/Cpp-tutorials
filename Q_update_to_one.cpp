#include<iostream>
using namespace std;

int main(){
    int arr[5]={7,8,9,4,5};

    for(int i=0; i<5; i=i+1){
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<5; i=i+1){
        arr[i]=1;
        cout<<arr[i]<<" ";
    }
}