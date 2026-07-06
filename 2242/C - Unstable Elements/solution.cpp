/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
    ll n,k;
    cin>>n>>k;
 
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
 
    vector<ll> counts;
    ll currentCount=1;
 
    for(ll i=1;i<n;i++){
        if(arr[i]==arr[i-1]) currentCount++;
        else{
        counts.pb(currentCount);
        currentCount=1;
        }
    }
    counts.pb(currentCount);
 
    // for(auto x:counts){
    //     cout<<x<<" ";
    // }
    // cout<<"
";
 
    sort(counts.begin(),counts.end());
    ll countSize=counts.size();
 
    vector<ll> suffixSum(countSize+1,0);
    for(ll i=countSize-1;i>=0;i--){
        suffixSum[i]=suffixSum[i+1]+counts[i];
    }
    
    // for(auto x:suffixSum){
    //     cout<<x<<" ";
    // }
    // cout<<"
";
 
    ll res=0;
    for(ll i=0;i<countSize;i++){
        if(counts[i]!=counts[i-1]||i==0){
            ll mini=counts[i];
            ll numOfBlocks=countSize-i;
            ll total=suffixSum[i];
            ll remain=k-total;
            if(remain%numOfBlocks==0){
               ll x=remain/numOfBlocks;
               if(x>=1-mini) res++;
            }
        }
    }
    cout<<res<<"
";
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
     freopen("input.txt",  "r",  stdin);
     freopen("output.txt", "w", stdout);
#endif
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}