/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
bool check(ll x,vector<ll>& cities,vector<ll>& tower,ll n,ll m){
    ll i=0;
    ll j=0;
    while(i<n&&j<m){
        if(abs(tower[j]-cities[i])<=x) i++;
        else j++;
    }
    if(i==n) return true;
    return false;
}
 
 
void solve(){
 
    ll n,m;
    cin>>n>>m;
    vector<ll> cities(n);
    vector<ll> tower(m);
    for(int i=0;i<n;i++) cin>>cities[i];
    for(int i=0;i<m;i++) cin>>tower[i];
 
    ll low=0;
    ll high=2e9;
    ll ans=-1;
 
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(mid,cities,tower,n,m)){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<ans<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}