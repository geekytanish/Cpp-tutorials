#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;

    int sum=0;
    int i=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }

    cout<<"The sum is: "<<sum;
    return 0;
}
