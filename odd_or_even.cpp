#include<iostream>
using namespace std;

void odd_or_even(int x){
    if(x%2==0){cout<<"Even";}
    else{cout<<"Odd";};
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    odd_or_even(num);
    return 0;
}
