/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
 
  ll n;
  cin>>n;
  ll m;cin>>m;
 
  cout<<n+m-1<<"
";
 
  for(int i=1;i<=m;i++){
     cout<<1<<" "<<i<<"
";
  }
  for(int j=2;j<=n;j++){
    cout<<j<<" "<<1<<"
";
  }
 
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