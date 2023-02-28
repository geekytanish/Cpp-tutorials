#include<iostream>
#include<vector>

using namespace std;

int find_unique(vector<int>arr){
    int ans=0;

    for(int i=0; i<arr.size(); i=i+1){
        ans=ans^arr[i];
    }

    return ans;
}

int main(){
    int n;
    cout<<"Size: ";
    cin>>n;
    vector<int>arr(n);

    cout<<"Enter the Elements: "<<endl;
    for(int i=0; i<arr.size();i=i+1){
        cin>>arr[i];
    }

    int answer=find_unique(arr);
    cout<<"Unique Element: "<<answer;
}
