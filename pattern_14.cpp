#include<iostream>
using namespace std;
int main(){
    
    for(int row=0; row<4; row=row+1){
        
        //printing spaces 
        for(int space =0; space < 3-row; space =space +1){
            cout<<" ";
        }

        //printing stars
        for(int stars=0; stars<row+1; stars=stars+1){
            cout<<"*";
        }
        cout<<endl;

    }
}
