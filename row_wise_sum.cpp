#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter Rows: ";
    cin>>row;
    cout<<"Enter Col: ";
    cin>>col;
    int arr[row][col];

    for(int i=0; i<row; i=i+1){
        for(int j=0; j<col; j=j+1){
            cout<<"Enter "<<i+1<<", "<<j+1<<"th element: "<<endl;
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for(int i=0; i<row; i=i+1){
        int sum=0;
        for(int j=0; j<col; j=j+1){
            sum=sum+arr[i][j];
        }
        cout<<sum;
        cout<<endl;
    }
    return 0;
}
