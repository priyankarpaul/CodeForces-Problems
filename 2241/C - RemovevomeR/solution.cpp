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
    ll n;
    cin>>n;
 
    string s;
    cin>>s;
 
    ll count=0;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]) count++;
    }
    if(count==1){
        cout<<2<<"
";
    }
    else cout<<1<<"
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