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
    
    ll a,b,c;
    cin>>a>>b>>c;
    ll x,y,z;
    cin>>x>>y>>z;
 
     if(((a!=x)&&(b!=y)&&(z!=c))||(a^x)+(b^y)+(c^z)==3){
        cout<<"NO
";
     }
     else cout<<"YES
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