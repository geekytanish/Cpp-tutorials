#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,0,1,1,0};

    int count_zero=0;
    int count_ones=0;

    for(int i=0; i<5; i=i+1){
        if(arr[i]==0){count_zero=count_zero+1;}
        else if(arr[i]==1){count_ones=count_ones+1;}
    }

    cout<<"The zeroes were found to be "<<count_zero<<" in number: "<<endl;
    cout<<"The ones were found to be "<<count_ones<<" in number: "<<endl;
    return 0;
}
