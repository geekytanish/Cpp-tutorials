#include<iostream>
using namespace std;

int print_sum(int a, int b){
    int sum= a+b;
    return sum;
}


int main(){
    int num1;
    int num2;

    cout<<"Enter NUM1:" ;
    cin>>num1;

    cout<<"ENter num2: ";
    cin>>num2;

    cout<<print_sum(num1,num2);
    return 0;
}
