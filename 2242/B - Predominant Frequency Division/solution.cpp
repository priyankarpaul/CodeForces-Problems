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
    vector<ll> arr(n);
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    vector<ll> prefixSum(n+1,0);
    for(int i=0;i<n;i++){
        ll weight=(arr[i]==3?-1:1);
        prefixSum[i+1]=prefixSum[i]+weight;
    }
    
    vector<ll> maxiValue(n+1,LLONG_MIN);
    ll currentMaxi=LLONG_MIN;
 
    for(int i=n-1;i>=1;i--){
        currentMaxi=max(currentMaxi,prefixSum[i]);
        maxiValue[i-1]=currentMaxi;
    }
 
    ll count=0;
    bool flag=false;
 
    for(int i=1;i<=n-2;i++){
        if(arr[i-1]==1) count++;
        if(2*count>=i){
            if(prefixSum[i]<=maxiValue[i]){
                flag=true;
                break;
            }
        }
    }
 
    if(flag) cout<<"YES
";
    else cout<<"NO
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