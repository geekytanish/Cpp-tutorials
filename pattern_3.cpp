#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0; row<n; row=row+1){
        for(int col=0; col<n; col=col+1){
            cout<<(n*row)+(col+1)<<" ";
        }
        cout<<endl;
    }
}