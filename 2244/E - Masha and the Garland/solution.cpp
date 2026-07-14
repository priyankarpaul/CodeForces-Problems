/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
    ll n,q;
    cin>>n>>q;
 
    string s;
    cin>>s;
 
    vector<ll> prefix(n,0);
    for(int i=0;i<n-1;i++){
        prefix[i+1]=prefix[i]+(s[i]==s[i+1]?1:0);
    }
 
    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;
        l--;
        r--;
        if(l==r){
            cout<<"YES
";
            continue;
        }
        ll flaw=prefix[r]-prefix[l];
        ll miniOps=(flaw+1)/2;
        if(miniOps<=k) cout<<"YES
";
        else cout<<"NO
";
    }
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