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
 
    map<ll,ll> counts;
    vector<ll> arr(n);
    ll totalSum=0;
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
        counts[arr[i]]++;
        totalSum+=arr[i];
    }
 
    ll numUniqueTypes=counts.size();
 
    vector<vector<ll>> dp(n+1,vector<ll>(totalSum+1,0ll));
    dp[0][0]=1;
 
     for(auto const& [val,cnt]:counts) {
        for(ll k=n;k>=1;k--){
            for(ll j=totalSum;j>=val;j--){
                for(ll i=1;i<=cnt&&i<=k;i++) {
                    if(j>=i*val&&dp[k-i][j-i*val]>0) {
                        dp[k][j]+=dp[k-i][j-i*val];
                        if(dp[k][j]>2){
                            dp[k][j]=2; 
                        }
                    }
                }
            }
        }
    }
 
    ll maxKnown=0;
 
    for(auto const& [val,cnt]:counts){
        for(ll k=1;k<=cnt;k++){
            ll target=k*val;
            if(dp[k][target]==1){
                if(k==cnt&&numUniqueTypes==2){
                    maxKnown=max(maxKnown,n);
                }
                else{
                    maxKnown=max(maxKnown,k);
                }
            }
        }
    }
    
    cout<<maxKnown<<"
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