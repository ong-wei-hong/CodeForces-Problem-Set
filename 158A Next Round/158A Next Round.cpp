#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n, k;
  cin>>n>>k;
  int limit, ans=0;
  for(int i=0; i<k; ++i){
    cin>>limit;
    if(limit>0)
      ++ans;
    else{
      cout<<ans;
      return 0;
    }
  }
  int x;
  for(int i=k; i<n; ++i){
    cin>>x;
    if(x==limit)
      ++ans;
    else
      break;
  }
  cout<<ans;
}
