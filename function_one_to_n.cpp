#include<iostream>

using namespace std;
void print_nums(int x){
    for(int i=0;i<=x;i=i+1){
        cout<<i<<endl;
    }
}


int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;

    print_nums(n);

    return 0;
}
