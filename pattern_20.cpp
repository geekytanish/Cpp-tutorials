#include<iostream>
using namespace std;
int main(){
    int count=1;
    for(int row=0; row<4; row=row+1){
    //printing spaces 
    for(int space =0; space<3-row; space = space+1){
        cout<<" ";
    }

    
    //printing num
    for(int num=0; num<=row; num=num+1){
        cout<<count;
        count++;
    }
    cout<<endl;
    }

}
