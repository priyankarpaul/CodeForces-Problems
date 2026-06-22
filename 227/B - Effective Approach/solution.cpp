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
   for(int i=0;i<n;i++){ 
       ll x;
       cin>>x;
       arr[x]=i;
   }
   
    ll petya=0;
    ll vasya=0;
 
   ll m;cin>>m;
   for(int i=0;i<m;i++){
      ll x;
      cin>>x;
      ll ans=arr[x];
      vasya+=(ans+1);
      petya+=(n-ans);
   }
 
   cout<<vasya<<" "<<petya<<"
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