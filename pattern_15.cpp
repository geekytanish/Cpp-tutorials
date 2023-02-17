#include<iostream>
using namespace std;
int main(){
    for(int row=0; row<4; row=row+1){
        
        //printing stars
        for(int star=0; star<4-row; star=star+1){
            cout<<"*";
        }

        //printing spaces 
        for(int space=0; space<row; space =space +1) {
            cout<<" ";
        }
        cout<<endl;
    }
}
