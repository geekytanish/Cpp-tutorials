#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(5);
    arr.push_back(6);

    cout<<"New Vector starts arr"<<endl;
    for(int i=0; i<arr.size(); i=i+1){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"New Vector starts brr"<<endl;
    vector<int>brr(10);
    cout<<"Size of brr "<<brr.size()<<endl;

    cout<<"New Vector starts crr"<<endl;
    int n; 
    cout<<"Size: ";
    cin>>n;
    vector<int>crr(n, -1);
    for(int i=0; i<crr.size(); i=i+1){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    cout<<"New Vector starts drr"<<endl;
    vector<int>drr{10,20,30,40,50};
    for(int i=0; i<drr.size(); i=i+1){
        cout<<drr[i]<<" ";
    }
    cout<<endl;
    cout<<"Vector drr Empty? "<<drr.empty()<<endl;
}
