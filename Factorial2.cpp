#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;
int Fact(int x){
   if(x==0){
       return 1;
   }
    return x*Fact(x-1);
}
int main(){
  int n;
  cin>>n;
  cout<<Fact(n);
  return 0;
}

#Time complexity:- T(n-1) + theta(1) = theta(n)
#Causes extra overhead
