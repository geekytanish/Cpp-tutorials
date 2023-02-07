#include<iostream>

using namespace std;

void print_prime_nums(int x){
    for(int num=1; num<=x; num=num+1){
        int count=0;
        for(int fctr=1; fctr<=num; fctr=fctr+1){
            if(num%fctr==0){count=count+1;}
        }
        if(count==2){cout<<num<<endl;}
    }
}

int main(){
    int limit;
    cout<<"Enter limit: ";
    cin>>limit;

    print_prime_nums(limit);
    return 0;
}
