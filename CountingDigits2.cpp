#include<iostream>
#include<limits.h>
using namespace std;
int countDigits(int x){
  int res=0;
  while(x>0){
      x=x/10;
      res++;
  }
  return res;
}
int main(){
  int n;
  cin>>n;
  cout<<countDigits(n);
  return 0;
}
