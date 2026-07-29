/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
//const ll MOD = 1e9 + 7;
const ll MOD=998244353;
 
vector<ll> fact,invFact;
ll power(ll base,ll exp) {
    ll res=1;
    base%=MOD;
    while(exp>0){
        if(exp%2==1)res=(res*base)%MOD;
        base=(base*base)%MOD;
        exp/=2;
    }
    return res;
}
 
ll modInverse(ll n){
    return power(n,MOD-2);
}
 
void precompute(ll n){
    fact.resize(n+1,1);
    invFact.resize(n+1,1);
    for (int i=2;i<=n;i++){
        fact[i]=(fact[i-1]*i)%MOD;
    }
    invFact[n]=modInverse(fact[n]);
    for (int i=n-1;i>=2;i--) {
        invFact[i]=(invFact[i+1]*(i+1))%MOD;
    }
}
 
ll nCr(ll n,ll r){
    if(r<0||r>n) return 0;
    return fact[n]*invFact[r]%MOD*invFact[n-r]%MOD;
}
 
void solve() {
    
    ll n;
    cin>>n;
    vector<ll> arr(n);
    map<ll,ll,greater<ll>> counts; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
        counts[arr[i]]++;
    }
    
    vector<ll> dp(n/2+1,0);
    dp[0]=1; 
    ll elementsProcessed=0;
 
    for(auto const&[size,count]:counts) {
        vector<ll> nextDp(n/2+1,0);
 
        for (int j=0;j<=n/2;j++){
            if(dp[j]==0) continue;
 
            ll unlocked_odd=0;
            if(j==n/2) {
                unlocked_odd=n/2;
            } 
            else if(j>0){
                unlocked_odd=j-1;
            }
            
            ll placed_odd=elementsProcessed-j;
            ll free_odd=unlocked_odd-placed_odd;
 
            if(free_odd>=count) {
                ll ways=nCr(free_odd,count);
                nextDp[j]=(nextDp[j]+dp[j]*ways)%MOD;
            }
 
            if(j+1<=n/2){
                if(free_odd>=count-1){
                    ll ways=nCr(free_odd,count-1);
                    nextDp[j+1]=(nextDp[j+1]+dp[j]*ways)%MOD;
                }
            }
        }
        dp=move(nextDp);
        elementsProcessed+=count;
    }
    cout<<dp[n/2]<<"
";
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    precompute(5005);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}