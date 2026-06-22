/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
const ll maxX=1e6;
 
ll n,d[maxX+1];
 
void init(){
    for(ll i = 1; i <= maxX; i++)
        for(ll j = i; j <= maxX; j += i){
            d[j]++;
        }
}
 
void solve() {
    ll n;
    cin>>n;
    vector<ll> count(101,0);
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        count[x]++;
    }
    ll mexA=0;
    while(count[mexA]>=1) mexA++;
    ll mexB=0;
    while(count[mexB]>=2) mexB++;
 
    cout<<mexB+mexA<<"
";
    
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    init();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}