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
    
    ll m=2*n;
    vector<ll> arr(m+1);
    for(int i=1;i<=m;i++) cin>>arr[i];
    
    vector<ll> dp(m+1,0);
    vector<ll> last(n+1,0);
 
    for(ll i=1;i<=m;i++){
        dp[i]=dp[i-1]+1;
        if(last[arr[i]]!=0){
            ll j=last[arr[i]];
            ll leng=i-j+1;
            dp[i]=max(dp[i],dp[j-1]+leng*leng);
        }
        if(last[arr[i]]==0){
            last[arr[i]]=i;
        }
    }
    cout<<dp[m]<<"
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