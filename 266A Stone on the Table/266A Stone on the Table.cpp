#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n, ans=0;
  cin>>n;
  string s;
  cin>>s;
  char prev=s[0];
  for(int i=1; i<n; ++i){
    char curr=s[i];
    if(curr==prev)
      ++ans;
    prev=curr;
  }
  cout<<ans;
}
