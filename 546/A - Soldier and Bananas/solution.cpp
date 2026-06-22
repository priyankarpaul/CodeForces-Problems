/*Author SungJinWoo*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
    ll k,n,w;
    cin>>k>>n>>w;
    ll cost=0;
    for(int i=1;i<=w;i++){
        cost+=i*k;
    }
    if(n>=cost) cout<<0<<"
";
    else cout<<cost-n<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}