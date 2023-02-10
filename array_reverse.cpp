#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int ar[5]={1,2,-3,9,5};
    int n=5;
    for(int i=n-1; i>=0;i=i-1){
        cout<<ar[i]<<" ";
    }
}
