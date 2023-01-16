//to check for a palindrome string:-

#include<bits/stdc++.h>
using namespace std;
string isPal(string s){
    string A =s;
    reverse(A.begin(), A.end());
    if( s==A)
        return "yes";
    else
        return "no";
}
int main(){
    string pal= "ABBA";
    cout<<isPal(pal)<<endl;
  return 0;
}
