#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    int count=0;
    int i=1;
    while(i<=n){
        if(n%i==0){count++;}
        i=i+1;
    }
    if(count==2){cout<<"PRime";}
    else{cout<<"Not Prime";}
    return 0;

}
