#include<iostream>
#include<string.h>
#include<array>

using namespace std;

int main(){
    char arr[50];
    char for_rev[50];

    cin.getline(arr, 50);
    bool is_palindrome=0;
    for(int i=0; i<strlen(arr); i=i+1){
        if(arr[i]==arr[strlen(arr)-i-1]){is_palindrome=1;}
        else{is_palindrome=0;}
    }

    if(is_palindrome==1){cout<<"This is palindrome";}
    else{cout<<"This is not a palindrome";}


}
