#include<iostream>

using namespace std;

int main(){
    int marks;

    cout<<"Enter Marks: ";
    cin>>marks;

    cout<<"Grade Obtained: ";
    if(marks>=90){cout<<"A";}
    else if(marks>=70 && marks<90){cout<<"B";}
    else if(marks>=60 && marks<70){cout<<"C";}
    else {cout<<"D";};

    return 0;
}
