#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;
int isPal(int x){
  int rev=0;
  int temp=x;
  while(temp!=0){
      int ld=temp%10;
      rev=rev*10+ld;
      temp=temp/10;
  }
  return rev==x;
}
int main(){
  int n;
  cin>>n;
  if(isPal(n)==1)
    cout<<"yes";
  else
    cout<<"no";
  return 0;
}

#Time complexity is theta(d) where is the number of digits in the input.
