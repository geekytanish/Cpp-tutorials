#include<iostream>
using namespace std;

void check_prime(int x){
    int count=0;
    for(int i=2;i<x;i=i+1){
        if(x%i==0){count++;}
    }

    if(count>0){cout<<"Not Prime";}
    else{cout<<"Prime";}

}

int main(){
    int num;
    cout<<"Enter Num: ";
    cin>>num;

    check_prime(num);
}
