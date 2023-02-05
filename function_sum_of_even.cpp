#include<iostream>
using namespace std;

int print_sum_of_even(int x){
    int sum=0;
    for(int i=0;i<=x;i=i+2){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    cout<<print_sum_of_even(n);

    return 0;
}
