#include<iostream>
#include<vector>
#include<array>
#include<limits.h>
using namespace std;

int majorityElement(vector<int>nums) {
        vector<int>maj(nums.size(),0);
        int maxi=0;
        int temp=0;
        //checking majority repetitions
        for(int i=0; i<nums.size(); i=i+1){
            for(int j=0; j<nums.size(); j=j+1){
                if(nums[i]==nums[j]){maj[i]++;}
            }
        }


        //finding i
        for(int i=0; i<maj.size(); i=i+1){
            if(maj[i]>maxi){maxi=maj[i];
            temp=i;}
        }

        return nums[temp];
    }

int main(){
    int n;
    cout<<"Size Of Array: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i=i+1){
        cout<<"Enter "<<i+1<<"th element: ";
        cin>>arr[i];
    }
    int maxi=majorityElement(arr);
    cout<<maxi;
}
