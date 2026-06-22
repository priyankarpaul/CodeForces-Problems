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
  for(ll i=0;i<n;i++) cin>>arr[i];
  
  vector<ll> ans;
  for(int i=0;i<n;i++){
    ans.pb(arr[i]);
    if(i+1<n&&__gcd(arr[i],arr[i+1])>1) ans.pb(1);
  } 
  cout<<ans.size()-n<<"
";
  for(ll i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  cout<<"
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