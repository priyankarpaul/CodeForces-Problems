/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
ll mini(string n,string possible_value){
    ll operation=0;
    ll checker=possible_value.size()-1;
 
    for(ll i=n.size()-1;i>=0;i--){
        if(n[i]==possible_value[checker]){
            checker--;
            if(checker<0) break;
        }
        else operation++;
    }
    if(checker>=0) operation=LLONG_MAX;
    return operation;
}
 
 
void solve() {
      
      string s;
      cin>>s;
 
      vector<string> possible={"00","25","50","75"};
      ll ans=LLONG_MAX;
 
      for(auto x:possible){
        ans=min(ans,mini(s,x));
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}