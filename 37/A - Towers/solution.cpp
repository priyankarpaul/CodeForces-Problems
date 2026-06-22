/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
set<char> adj;
 
void solve() {
    
    ll n;cin>>n;
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
 
    ll height=0;
    ll total=0;
 
    for(auto x:mp){
        if(x.ss>=1) total++;
        height=max(height,x.ss);
    }
    
    cout<<height<<" "<<total<<"
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