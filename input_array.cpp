#include<iostream>
using namespace std;
int main(){
    int ar[10];
    for(int i=0; i<10;i=i+1){
        cout<<"Enter"<<" "<<i<<"th element"<<endl;
        cin>>ar[i];
    }
    for(int i=0; i<10;i=i+1){
        cout<<"The"<<" "<<i<<"th element is: "<<ar[i]<<endl;
    }
}
