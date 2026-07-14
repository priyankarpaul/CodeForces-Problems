/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
    ll n,m;
    cin>>n>>m;
 
    vector<ll> arr(n+1);
    vector<ll> prr(m);
 
    for(int i=1;i<=n;i++) cin>>arr[i];
    for(int i=0;i<m;i++) cin>>prr[i];
 
    sort(prr.begin(),prr.end());
    
    ll dp0=0;
    ll dp1=0;
 
    ll lastP=0;
    for(auto x:prr){
        ll sum=0;
        ll flipSum=0;
 
        for(int i=lastP+1;i<=x;i++){
            sum+=arr[i];
            flipSum+=(-arr[i]);
        }
 
        ll dp0Next=(max(dp0+sum,dp1+sum));
        ll dp1Next=(max(dp0+flipSum,dp1+flipSum));
 
        dp0=dp0Next;
        dp1=dp1Next;
        lastP=x;
    }
 
    ll maxi=max(dp1,dp0);
    for(int i=lastP+1;i<=n;i++) maxi+=arr[i];
 
    cout<<maxi<<"
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