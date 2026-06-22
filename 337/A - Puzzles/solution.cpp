/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
 
     ll n,m;cin>>n>>m;
     vector<ll> arr(m);
     for(int i=0;i<m;i++) cin>>arr[i];
     sort(arr.begin(),arr.end());
     ll res=arr[n-1]-arr[0];
     for(int i=1;i<=m-n;i++){
        res=min(res,arr[i+n-1]-arr[i]);
     }
     cout<<res<<"
";
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}