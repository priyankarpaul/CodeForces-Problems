/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
bool isSqrt(ll n){
    ll x=sqrt(n);
    return x*x==n;
}
 
void solve() {
   
   ll n,m;
   cin>>n>>m;
 
   ll stairCount=(n+1)/2;
   ll ans=(stairCount+m-1)/m*m;
   if(ans>n){
    cout<<-1<<"
";
    return;
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
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}