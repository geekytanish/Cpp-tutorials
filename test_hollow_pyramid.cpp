#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter rows: ";
    cin>>n;

    for(int i=0;i<n;i++){

        if(i==0){for(int x=1;x<=n;x++){
            cout<<x<<" ";
        }}

        else if(i==n-1){cout<<n;}
        
        else{
            cout<<i+1;
        for(int j=0;j<=(n-i-1);j++){
            cout<<" ";
        }
        cout<<n;}

        cout<<endl;
    }
}