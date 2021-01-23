#include <bits/stdc++.h>
using namespace std;
 
int main(){
  set<char> s;
  string name;
  cin>>name;
  for(char c: name)
    s.insert(c);
  if(s.size()%2==0)
    cout<<"CHAT WITH HER!";
  else
    cout<<"IGNORE HIM!";
}
