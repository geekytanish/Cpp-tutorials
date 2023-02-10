#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int ar[5]={1,2,-3,9,5};
    int least=INT_MAX;
    for(int i=0; i<5;i=i+1){
        if(ar[i]<least){least=ar[i];}
    }
    cout<<"Minimum:"<<least;
}
