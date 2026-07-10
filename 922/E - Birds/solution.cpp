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
    ll W,B,X;
    cin>>n>>W>>B>>X;
 
    vector<ll> c(n);
    ll total_birds=0;
    for(int i=0;i<n;++i){
        cin>>c[i];
        total_birds+=c[i];
    }
 
    vector<ll> cost(n);
    for (int i=0;i<n;++i) cin>>cost[i];
    
 
    vector<ll> dp(total_birds+1,-1);
    dp[0] = W; 
    ll current_max_birds = 0;
 
    for(int i=0;i<n;++i){
        for(int j=current_max_birds+c[i];j>=0;--j){
            ll max_mana=-1;
            for(int k=0;k<=c[i]&&k<=j;++k){
                ll prev_j=j-k;
                if(prev_j>current_max_birds||dp[prev_j]==-1) continue;
 
                ll required_cost=k*cost[i];
                if(dp[prev_j]>=required_cost){
                    max_mana=max(max_mana,dp[prev_j]-required_cost);
                }
            }
            dp[j]=max_mana;
        }
 
        current_max_birds+=c[i];
 
        if(i<n-1) {
            for(int j=0;j<=current_max_birds;++j) {
                if(dp[j]!=-1) {
                    ll max_capacity=W+j*B;
                    dp[j]=min(max_capacity,dp[j]+X);
                }
            }
        }
    }
 
    for(int j=total_birds;j>=0;--j){
        if(dp[j]!=-1){
            cout<<j<<"
";
            return;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
     freopen("input.txt",  "r",  stdin);
     freopen("output.txt", "w", stdout);
#endif
 
    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}