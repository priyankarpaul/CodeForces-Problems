/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
    ll n,x,y,z;
    cin>>n>>x>>y>>z;
 
    ll time1=(n+x+y-1)/(x+y);
 
    ll time2;
 
    if(x*z>=n){
        time2=(n+x-1)/x;
    }
    else{
        ll remaining=n-(x*z);
        ll useWithAI=x+10*y;
        ll extraTime=(useWithAI+remaining-1)/useWithAI;
        time2=z+extraTime;
    }
    ll ans=min(time1,time2);
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