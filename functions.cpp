#include<iostream>
using namespace std;


void print_name(int k){
    for(int i=1;i<=k;i=i+1){
        cout<<"Tanish Sharma"<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter repetitions: ";
    cin>>n;
    print_name(n);
    return 0;
}
