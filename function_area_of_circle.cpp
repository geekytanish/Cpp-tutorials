#include<iostream>
using namespace std;

float area_of_circle(float x){
    return 3.14*x*x;
}

int main(){
    float r;
    cout<<"Enter Radius: ";
    cin>>r;

    cout<<area_of_circle(r);
    return 0;
}
