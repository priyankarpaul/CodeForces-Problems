/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    ll l,r,k;
    cin>>l>>r>>k;
 
    ll res=(r-l+1)-(r/2-(l-1)/2);
    if(l==1&&r==1) cout<<"NO
";
    else if(res<=k||l==r) cout<<"YES
"; 
    else cout<<"NO
";
    
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}