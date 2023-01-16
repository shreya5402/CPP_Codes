#include<bits/stdc++.h>
using namespace std;
int countDigits(int x){
  return floor(log10(x))+1;
}
int main(){
  int n;
  cin>>n;
  cout<<countDigits(n);
  return 0;
}

//Time complexity = O(1)
