#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;

    cout<<"a= ";
    cout<<a;
    cout<<endl;
    cout<<"&a= ";
    cout<<&a;
    cout<<endl;
    cout<<"ptr= ";
    cout<<ptr;
    cout<<endl;
    cout<<"*ptr= ";
    cout<<*ptr;
}
