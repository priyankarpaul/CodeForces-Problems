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
 
    vector<ll> arr(n*2);
    for(int i=0;i<2*n;i++) cin>>arr[i];
 
    sort(arr.begin(),arr.end());
    ll ans=(arr[n-1]-arr[0])*(arr[2*n-1]-arr[n]);
    
    ll totalRange=arr[2*n-1]-arr[0];
    for(int i=1;i<=n;i++){
        ll current=totalRange*(arr[i+n-1]-arr[i]);
        ans=min(ans,current);
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