#include<iostream>
using namespace std;

int main(){
    int row;
    int col;

    cout<<"Enter rows: ";
    cin>>row;

    cout<<"Enter coloumns: ";
    cin>>col;

    for(int i=0;i<row;i=i+1){
        
        //first and the last rows are printed here
        if(i==0 || i==row-1){
            for(int j=0;j<col;j=j+1){          
                cout<<"* ";
            }
        }


        //now here we'll be printing the spaces with *'s
        else{
            cout<<"* ";
            for(int j=0;j<=col;j=j+1){
                cout<<" ";
                }
            cout<<"* ";
        }

    cout<<endl;}
}
