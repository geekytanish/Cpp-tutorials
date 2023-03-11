#include<iostream>
#include<bits/stdc++.h>
#include<limits.h>
#include<limits>
using namespace std;

void printDigits(int num){
    //base case
    if(num==0){
        return;
    }

    int digit= num%10;
    cout<<digit<<endl;
    
    int updated_n= num/10;

    printDigits(updated_n);
}

int main(){
    int num=647;

    printDigits(num);

    return 0;
}
