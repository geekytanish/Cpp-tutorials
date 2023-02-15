#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int count=1;
    for(int row=0; row<=n; row=row+1){
        for(int col=0; col<row; col=col+1){
            cout<<count<<" ";
            count++; 
        }
        cout<<endl;
    }
}
