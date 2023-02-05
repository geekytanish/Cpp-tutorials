#include<iostream>
using namespace std;

int print_max(int a, int b, int c);

int main(){
    int num1;
    int num2;
    int num3;

    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    cout<<"Enter num3: ";
    cin>>num3;

    cout<<"The Max of the three is :"<<print_max(num1,num2,num3)<<endl;
    return 0;
}

int print_max(int a, int b, int c){
    if(a>b && a>c){return a;}
    else if(b>a && b>c){return b;}
    else{return c;};
}
