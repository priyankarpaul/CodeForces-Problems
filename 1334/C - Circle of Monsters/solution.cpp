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
 
    vector<ll> arr(n),brr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i]>>brr[i];
    }
 
    ll totalBaseCost=0;
    ll miniExtraCost=INF;
 
    for(int i=0;i<n;i++){
        ll x=(i-1+n)%n;
        ll baseCost=max(0LL,arr[i]-brr[x]);
        totalBaseCost+=baseCost;
 
        ll extraCost=min(arr[i],brr[x]);
        miniExtraCost=min(miniExtraCost,extraCost);
    }
    cout<<totalBaseCost+miniExtraCost<<"
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