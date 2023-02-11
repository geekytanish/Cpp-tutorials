#include <iostream>
#include<vector>
using namespace std;
int find_unique(vector<int>arr){
  int ans=0;
  for(int i=0; i<arr.size(); i=i+1){
    ans=ans^arr[i];
  }
  return ans;
}
int main() {
  int n;
  cout<<"Size:";
  cin>>n;
  vector<int>array(n);
  for(int i=0; i<array.size(); i=i+1){
    cout<<"Enter "<<i<<" th element:";
    cin>>array[i];
  }
  int unique_element= find_unique(array);
  cout<<"unique element="<<unique_element;
  return 0;
}
