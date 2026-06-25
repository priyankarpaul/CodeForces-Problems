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
  vector<ll> arr(n+1);
  for(int i=1;i<=n;i++) cin>>arr[i];
  if(n==1){
    cout<<0<<"
";
    return;
  }
  ll count=0;
  ll mini=arr[n];
  for(int i=n;i>=1;i--){
    mini=min(mini,arr[i]);
    if(arr[i]>mini){
       count++;
    }
  }
 
  cout<<count<<"
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