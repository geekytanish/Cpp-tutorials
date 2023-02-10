#include<iostream>
using namespace std;
int main(){
    int ar[5]={1,2,3,4,5};
    int num;
    cout<<"Enter Num: ";
    cin>>num;
    int count=0;
    for(int i=0; i<5; i=i+1){
        if(ar[i]==num){count++;}
    }
    if(count>=1){cout<<"Present";}
    else{cout<<"Not Present";}
    return 0;
}
