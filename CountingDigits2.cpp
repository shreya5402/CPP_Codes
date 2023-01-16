#include<bits/stdc++.h>
using namespace std;
int countDigits(long long int x){
  if(x==0)
    return 1;
  int res=0;
  while(x!=0){
      x=x/10;
      res++;
  }
  return res;
}
int main(void){
  long long n;
  cin>>n;
  cout<<countDigits(n);
  return 0;
}
