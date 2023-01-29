#include<iostream>
using namespace std;

int main(){

    //Row is representing the rows count 
    //col is representing the colomns count
    int row;
    int col;

    cout<<"Enter No. of rows: ";
    cin>>row;

    cout<<"Enter No. of colomns: ";
    cin>>col;

    for(int i=0;i<row;i=i+1){
        for(int j=0;j<col;j=j+1){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;

}
