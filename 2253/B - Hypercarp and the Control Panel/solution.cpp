/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
bool prime(ll n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
 
void solve() {
 
    ll n;
    cin>>n;
 
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
 
    vector<ll> v,count;
    for (ll i=0;i<n;i++){
            if(v.empty()||v.back()!=arr[i]){
                v.pb(arr[i]);
                count.pb(1);
            } 
            else count.back()++;
        }
 
        ll k=v.size();
        ll ans=k;
 
        for(ll i=0;i+1<k;i++) {
            if(count[i]>1&&count[i+1]>1){
                ans=k+2;
                break;
            }
        }
 
        if(ans==k){
            for(ll i=0;i<k;i++){
                if(count[i]==1) continue;
                if(i+1<k){
                    if(i+2==k||v[i]!=v[i+2]) ans=max(ans,k+1);
                }
                if(i>0){
                    if(i<2||v[i]!=v[i-2]) ans=max(ans,k+1);
                }
            }
        }
        cout<<ans<<"
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