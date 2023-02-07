#include<iostream>

using namespace std;

void print_dig(int x){
    int dig;
    while(x>0){
        dig=x%10;
        cout<<dig<<endl;
        x=x/10;
    }
}

int main(){
    int num;

    cout<<"Enter Number: ";
    cin>>num;

    print_dig(num);

    return 0;
}
