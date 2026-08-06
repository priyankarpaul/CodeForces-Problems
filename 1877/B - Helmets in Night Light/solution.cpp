/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    ll n,p;
    cin>>n>>p;
 
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    vector<ll> brr(n);
    vector<pair<ll,ll>> vp;
    for(int i=0;i<n;i++){
        cin>>brr[i];
        vp.pb({min(brr[i],p),arr[i]});
    }
 
    sort(vp.begin(),vp.end());
    ll ans=p;
    ll count=n-1;
    for(int i=0;i<n-1;i++){
        ans+=min(vp[i].ss,count)*vp[i].ff;
        count-=min(vp[i].ss,count);
    }
    cout<<ans<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}