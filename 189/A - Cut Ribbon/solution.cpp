/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
void solve(){
    
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
 
    vector<ll> dp(n+1,-1);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        if(i>=a&&dp[i-a]!=-1) dp[i]=max(dp[i],dp[i-a]+1);
        if(i>=b&&dp[i-b]!=-1) dp[i]=max(dp[i],dp[i-b]+1);
        if(i>=c&&dp[i-c]!=-1) dp[i]=max(dp[i],dp[i-c]+1);
    }
    cout<<dp[n]<<"
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