#include<iostream>
using namespace std;

int print_factorial(int x){
    int fctrl=1;
    for(int i=1;i<=x;i=i+1){
        fctrl=fctrl*i;
    }

    return fctrl;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    cout<<print_factorial(num);
    return 0;
}
