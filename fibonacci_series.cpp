#include<iostream>
using namespace std;

int main(){
    int n1=0;
    int n2=1;
    int n3;

    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;
    cout<<n1;
        cout<<n2;
    for(int i=0; i<=limit; i=i+1){
        
        n3=n1+n2;
        cout<<n3<<endl;
        n1=n2;
        n2=n3;
    }

}
