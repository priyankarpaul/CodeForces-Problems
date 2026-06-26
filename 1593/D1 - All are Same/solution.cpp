/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
 
  ll n;cin>>n;
  vector<ll> arr(n);
  ll mini=LLONG_MAX;
  for(int i=0;i<n;i++){
   cin>>arr[i];
   mini=min(arr[i],mini);
  }
 
  ll count=0;
 
  for(int i=0;i<n;i++){
    if(arr[i]==mini) count++;
  }
 
  if(count==n){
    cout<<-1<<"
";
    return;
  }
 
  for(int i=0;i<n;i++){
    arr[i]=abs(arr[i]-mini);
  }
 
 
  ll ans=0;
  for(int i=0;i<n;i++){
    ans=__gcd(ans,arr[i]);
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