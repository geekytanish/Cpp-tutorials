#include<iostream>
using namespace std;
int main(){
    for(int row=0; row<4; row=row+1){
        //printing spaces 
        for(int space=0; space<row; space =space +1) {
            cout<<" ";
        }
        
        //printing stars
        for(int num=0; num<4-row; num=num+1){
            cout<<row+1;
        }

        cout<<endl;
    }
}
