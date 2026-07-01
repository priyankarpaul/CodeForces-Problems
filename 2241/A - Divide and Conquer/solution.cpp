/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
bool perfectSquare(ll x){
    if(x<0) return false;
    ll r=round(sqrt(x));
    return r*r==x;
}
 
void solve() {
 
    ll x,y;
    cin>>x>>y;
 
    if(x%y==0) cout<<"YES
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