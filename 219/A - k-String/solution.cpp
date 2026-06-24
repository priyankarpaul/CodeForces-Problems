/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
ll digitSum(ll x){
    ll sum=0;
    while(x){
        ll digit=x%10;
        sum+=digit;
        x/=10;
    }
    return sum;
}
 
 
void solve() {
 
  ll k;
  cin>>k;
 
  string s;
  cin>>s;
 
  map<char,ll> mp;
  for(ll i=0;i<s.size();i++){
    mp[s[i]]++;
  }
 
 
  for(auto x:mp){
     if(x.ss%k!=0){
        cout<<"-1
";
        return;
     }
  }
  
  string str="";
  for(auto x:mp){
    ll repeatCount=x.ss/k;
    for(ll i=0;i<repeatCount;i++) str.pb(x.ff);
  }
 
  string ans;
 
  for(int i=0;i<k;i++){
    ans+=str;
  }
 
  cout<<ans<<"
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