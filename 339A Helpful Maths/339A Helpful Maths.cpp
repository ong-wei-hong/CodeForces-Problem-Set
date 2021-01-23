#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string s;
  cin>>s;
  int a=0, b=0, c=0;
  for(int i=0; i<s.length(); i+=2){
    if(s[i]=='1')
      ++a;
    if(s[i]=='2')
      ++b;
    if(s[i]=='3')
      ++c;
  }
  bool first=0;
  for(int i=0; i<a; ++i){
    if(first)
      cout<<"+1";
    else{
      cout<<"1";
      first=1;
    }
  }
  for(int i=0; i<b; ++i){
    if(first)
      cout<<"+2";
    else{
      cout<<"2";
      first=1;
    }
  }
  for(int i=0; i<c; ++i){
    if(first)
      cout<<"+3";
    else{
      cout<<"3";
      first=1;
    }
  }
}
