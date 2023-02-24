#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    
    for(int i=0; i<5; i=i+1){
        if(arr[i]==arr[5-i-1]){break;}
        else{swap(arr[i], arr[5-i-1]);}
    }

    for(int i=0; i<5; i=i+1){
        cout<<arr[i]<<" ";
    }
}
