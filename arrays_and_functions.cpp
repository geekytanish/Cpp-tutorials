#include<iostream>
using namespace std;
void print_array(int ar[], int size){
    for(int i=0; i<size; i=i+1){
        cout<<ar[i]<<endl;
    }
}
int main(){
    int ar[10]={1,2,3,4,5,6,7,8,9};
    int size=10;

    print_array(ar,size);
}
