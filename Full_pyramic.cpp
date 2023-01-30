#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int x=1;x<=(i+(i-1));x=x+2){
            cout<<"* ";
        }

        cout<<endl;
    }
}
