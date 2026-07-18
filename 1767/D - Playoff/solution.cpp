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
    string s;
    cin>>s;
 
    ll ones=0;
    ll zeros=0;
    for(auto x:s){
        if(x=='1') ones++;
        else zeros++;
    }
 
    ll minWinning=1<<ones;
    ll maxWinning=(1<<n)-(1<<zeros)+1;
 
    for(ll i=minWinning;i<=maxWinning;i++){
        cout<<i<<" ";
    }
        cout<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}