#include<iostream>

using namespace std;

int main(){
    int num;

    cout<<"Enter number: ";
    cin>>num;

    int sum=0;
    for(int i=num;(i>=0 && i<=100);i=i+1){
        sum=sum+i;
    }

    cout<<"The sum is: "<<sum;

    return 0;
}
