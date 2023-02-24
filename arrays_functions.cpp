#include<iostream>
using namespace std;

void get_array(int arr[],int size){
    for(int i=0; i<size; i=i+1){
        cout<<"Enter "<<i+1<<"th element: ";
        cin>>arr[i];
    }
}

void print_array(int arr[], int size){
    for(int i=0; i<size; i=i+1){
        cout<<"The "<<i+1<<" element is: "<<arr[i]<<endl;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;

    get_array(arr, size);
    print_array(arr, size);
}