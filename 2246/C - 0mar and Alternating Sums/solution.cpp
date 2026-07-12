/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
ll power(ll base,ll exp) {
    ll res=1;
    base%=MOD;
    while(exp>0) {
        if(exp%2==1)res=(res*base)%MOD;
        base=(base*base)%MOD;
        exp/=2;
    }
    return res;
}
 
void solve() {
    
    ll n;
    cin>>n;
    
    ll negOnes=0;
    map<ll,ll> posFreq;
    
    for (ll i=0;i<n;i++) {
        ll val;
        cin>>val;
        if(val==-1){
            negOnes++;
        } 
        else{
            posFreq[val]++;
        }
    }
    
    ll calulate=1;
    for(auto const&[val,count]:posFreq) {
        calulate=(calulate*power(2,count-1))%MOD;
    }
 
    ll values=0;
    for(auto const&[val,count]:posFreq) {
        if (posFreq.count(val+1)) {
            values++;
        }
    }
 
    ll values2=(values*calulate)%MOD;
    ll ans=0;
    if(negOnes==0){
        ans=calulate;
    } 
    else{
        ll steps=power(2,negOnes-1);
        ans=(steps*((calulate+values2)%MOD))%MOD;
    }
 
    cout<<ans<<"
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