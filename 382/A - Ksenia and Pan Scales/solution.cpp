/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
 
  string s1;
  cin>>s1;
 
  string s2;
  cin>>s2;
 
  ll positionOfOR=0;
 
  for(ll i=0;i<s1.size();i++){
    if(s1[i]=='|') {
        positionOfOR=i;
        break;
    }
  }
 
  string left="";
  string right="";
 
  for(ll i=0;i<positionOfOR;i++){
    left.pb(s1[i]);
  }
 
  for(ll i=positionOfOR+1;i<s1.size();i++){
    right.pb(s1[i]);
  }
 
  for(auto x:s2){
    if(left.size()<=right.size()){
        left.pb(x);
    }
    else{
        right.pb(x);
    }
  }
 
  if(right.size()==left.size()){
     cout<<left<<"|"<<right<<"
";
  }
  else cout<<"Impossible
";
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
 #ifndef ONLINE_JUDGE
     freopen("input.txt",  "r",  stdin);
     freopen("output.txt", "w", stdout);
 #endif
 
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}