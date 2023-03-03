#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;
    cout<<ptr;
    cout<<endl;
    int *dusraptr=ptr;
    cout<<dusraptr;
}
