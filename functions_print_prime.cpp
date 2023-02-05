#include<iostream>
using namespace std;

void print_prime(int x){
    for(int i=1;i<=x;i=i+1){
        int factors=0;
        for(int j=1;j<=i;j=j+1){
            if(i%j==0){factors++;}
        }
       if(factors==2){cout<<i<<endl;}
    }
}

int main(){
    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;
    print_prime(limit);
    return 0;
}
