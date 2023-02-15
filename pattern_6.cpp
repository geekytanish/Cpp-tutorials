#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0; row<n; row=row+1){
        for(int col=0; col<=row; col=col+1){
            if(row==col){cout<<"1 ";}
            else if(col==0){cout<<row+1<<" ";}
            else{cout<<n-col<<" ";}
        }
        cout<<endl;
    }
}
