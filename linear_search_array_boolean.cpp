#include<iostream>
using namespace std;
int main(){
    int ar[5]={1,2,3,4,5};
    int num;
    cout<<"Enter Num: ";
    cin>>num;
    bool flag=0;
    for(int i=0; i<5; i=i+1){
        if(ar[i]==num){flag=1;}
    }
    if(flag){cout<<"Present";}
    else{cout<<"Not Present";}
    return 0;
}
