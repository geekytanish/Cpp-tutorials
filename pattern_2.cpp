#include<iostream>
using namespace std;
int main(){
    for(int row=0; row<3; row=row+1){
        for(int col=0;col<3; col=col+1){
            cout<<3-col<<" ";
        }
        cout<<endl;
    }
}
