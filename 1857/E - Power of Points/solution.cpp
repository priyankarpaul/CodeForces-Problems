/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
void solve() {
 
    ll n;
    cin>>n;
    vector<pair<ll,ll>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].ff;
        arr[i].ss=i;
    }
 
    sort(arr.begin(),arr.end());
    vector<ll> pref(n+1,0);
    for(ll i=0;i<n;i++){
        pref[i+1]=pref[i]+arr[i].ff;
    }
 
    vector<ll> ans(n);
    for(ll k=0;k<n;k++){
        ll val=arr[k].ff;
        ll originalIndex=arr[k].ss;
        ll currentSum=(2LL*k-n+1)*val-pref[k]+(pref[n]-pref[k+1]);
        ans[originalIndex]=currentSum+n;
    }
 
    for(ll i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"
";
 
}   
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}