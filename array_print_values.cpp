#include<iostream>
using namespace std;

int main(){

    //this will give garbage output
    int arr[23];

    for(int i=0; i<23;  i=i+1){
        cout<<arr[i]<<endl;
    }

    cout<<endl;

    //this will give 0 as output
    int arr_2[23]={};

    for(int i=0; i<23;  i=i+1){
        cout<<arr_2[i]<<endl;
    }
}