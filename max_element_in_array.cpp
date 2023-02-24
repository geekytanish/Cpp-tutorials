#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int max=INT_MIN;

    int arr[5]={64,32,45,78,96};

    for(int i=0; i<5; i=i+1){
        if(arr[i]>max){max=arr[i];}
    }
    cout<<"The max is: "<<max;
}
