#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int squareRoot(int num,  vector<int>arr){
  int start=0;
  int end=arr.size()-1;
  int mid=start+((end-start)/2);

  while(start<=end){
    //mid is the sqare-root
  if(mid*mid==num){
    return mid;
  }  
  //mid*mid>num --> search left
  if(mid*mid>num){
    end=mid-1;
  }

  //mid*mid<num -->search right
  if(mid*mid<num){
    start=mid+1;
  }

  mid=start+((end-start)/2);
  }
  
}

int main() {
  int num=9;
  vector<int>arr(num);
  //giving values to array
  for(int i=1; i<=num; i=i+1){
    arr[i]=i;
  }
  int ans=squareRoot(num,arr);
  cout<<ans<<endl;
}
