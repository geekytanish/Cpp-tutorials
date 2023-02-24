#include<iostream>
using namespace std;

int main(){
    int arr[5]={7,8,5,6,9};

    bool flag=0;

    int num;
    cout<<"Enter number to be checked: ";
    cin>>num;

    for(int i=0; i<sizeof(arr); i=i+1){
        if(arr[i]==num){flag=1;}
    }

    if(flag==1){cout<<"It is there";}
    else{cout<<"It's not there";}
}


