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
 
    ll n,k;
    cin>>n>>k;
 
    vector<ll> smallDivisor,largeDivisor;
 
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            smallDivisor.pb(i);
        if(i*i!=n){
            largeDivisor.pb(n/i);
        }
     }
 
   }
 
   ll totalDivisor=smallDivisor.size()+largeDivisor.size();
 
   if(k>totalDivisor){
    cout<<-1<<"
";
   }
   else if(k<=smallDivisor.size()){
    cout<<smallDivisor[k-1]<<"
";
   }
   else{
    ll index=k-smallDivisor.size()-1;
    cout<<largeDivisor[largeDivisor.size()-1-index]<<"
";
   }
 
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