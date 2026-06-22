/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
void solve() {  
    
    ll n,h,m;
    cin>>n>>h>>m;
 
    ll time=60*h+m;
    ll ans=24*60;
    for(int i=0;i<n;i++){
        cin>>h>>m;
        ll t=60*h+m-time;
        if(t<0) t+=24*60;
        ans=min(ans,t);
    }
    cout<<ans/60<<" "<<ans%60<<"
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