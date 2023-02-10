#include <iostream>
using namespace std;

int main() {
  int ar[4]={1,3,5,7};

  for(int i=0; i<4; i=i+1){
    ar[i]=1;
  }
  for(int i=0; i<4; i=i+1){
    cout<<ar[i]<<endl;
  }
  return 0;
}
