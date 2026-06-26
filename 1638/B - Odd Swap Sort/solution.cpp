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
  vector<ll> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 
  vector<ll> evens,odds;
  for(int i=0;i<n;i++){
    if(arr[i]%2==0) evens.pb(arr[i]);
    else odds.pb(arr[i]);
  }
 
  if(is_sorted(evens.begin(),evens.end())&&is_sorted(odds.begin(),odds.end())){
    cout<<"Yes
";
  }
  else cout<<"No
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