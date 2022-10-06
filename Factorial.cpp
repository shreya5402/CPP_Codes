#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;
int Fact(int x){
    int res=1;
    for(int i=2; i<=x; i++){
        res=res*i;
    }
    return res;
}
int main(){
  int n;
  cin>>n;
  cout<<Fact(n);
  return 0;
}

#Time complexity:- O(n)
#This is a better approach as it doesn't cause any extra overhead
