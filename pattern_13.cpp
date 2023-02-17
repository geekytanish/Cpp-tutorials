#include<iostream>
using namespace std;
int main(){
    char alpha='D';

    for(int row=0; row<4; row=row+1){
            char start=alpha-row;
        for(int col=0; col<=row; col=col+1){
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }
}
