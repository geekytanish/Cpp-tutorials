#include<iostream>
using namespace std;

int main(){
    int arr[5];
    
    for(int i=0; i<5; i=i+1){
        cout<<"Enter "<<i+1<<"th value: ";
        cin>>arr[i];
    }

    for(int i=0; i<5; i=i+1){
        cout<<"The "<<i+1<<"th element is: "<<arr[i]<<endl;
    }
}