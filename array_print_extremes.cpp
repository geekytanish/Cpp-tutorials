#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int ar[5]={1,2,-3,9,5};
    int n=5;
    for(int i=0; i<n;i=i+1){
        if(ar[i]==ar[n-1]){cout<<ar[i];}
        else
        cout<<ar[i]<<" "<<ar[n-1]<<endl;
        n=n-1;
    }
}
