#include<iostream>
using namespace std;
int main(){
    int ar[5]={1,2,3,9,5};
    int greatest=0;
    for(int i=0; i<5; i=i+1){
        if(ar[i]>greatest){greatest=ar[i];}
    }
    cout<<"Max: "<<greatest;
    return 0;
}
