#include<iostream>
#include<array>
#include<string.h>
using namespace std;

int main(){
    char arr[50];

    cin>>arr;

    for(int i=0; i<strlen(arr); i=i+1){
        if(arr[i]==arr[strlen(arr)-i-1]){break;}
        swap(arr[i],arr[strlen(arr)-i-1]);
    }

    cout<<arr;
}
