#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int squareRoot(int num){
  int target=num;
  int start=0;
  int end=num;
  int mid=start+((end-start)/2);
  int ans=-1;

  while(start<=end){
    //mid is the sqare-root
  if(mid*mid==target){
    return mid;
  }  
  //mid*mid>num --> search left
  if(mid*mid>target){
    end=mid-1;
  }

  //mid*mid<num -->search right
  else{
    ans=mid;
    start=mid+1;
  }

  mid=start+((end-start)/2);
  }
  
}

int main() {
  int num=10;
  vector<int>arr(num);
  int ans=squareRoot(num);
  cout<<ans<<endl;
}
