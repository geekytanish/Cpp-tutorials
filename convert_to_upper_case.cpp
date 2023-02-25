#include<iostream>
#include<string.h>
#include<array>
using namespace std;

int main(){
    char arr[50];

    cin.getline(arr, 50);

    for(int i=0; i<strlen(arr); i=i+1){
        if(arr[i]==' '){continue;}
        arr[i]=arr[i]-32;
    }
    cout<<arr;
}
