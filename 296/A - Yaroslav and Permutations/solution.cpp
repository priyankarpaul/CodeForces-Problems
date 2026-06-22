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
  ll count=0;
  ll maxi=0;
  vector<ll> arr(n);
   map<ll,ll> mp;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
  }
   
  count=n/2+n%2;
 
 
  for(auto x:mp){
    maxi=max(x.ss,maxi);
  }
 
  if(maxi>count) cout<<"NO
";
  else cout<<"YES
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