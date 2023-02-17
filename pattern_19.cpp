#include<iostream>
using namespace std;

int main(){
    
    for(int row=0; row<4; row=row+1){
        

        //printing spaces
        for(int space =0; space < row; space=space+1){
            cout<<" ";
        }

        //printing nums
        for(int num=row; num<4; num=num+1){
            cout<<num+1;
        }
        cout<<endl;
    }
}
