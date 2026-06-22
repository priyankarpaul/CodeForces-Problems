/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
const ll maxX=1e6;
 
 
void solve() {
   
   ll n;
   cin>>n;
 
   vector<ll> arr;
   arr.pb(1);
 
   for(ll i=0;i<arr.size();i++){
      ll x=arr[i];
      if(x*10<=1e9) arr.pb(x*10);
      if(x*10+1<=1e9) arr.pb(x*10+1);
   }
 
   sort(arr.begin(),arr.end());
 
   ll ans=upper_bound(arr.begin(),arr.end(),n)-arr.begin();
 
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