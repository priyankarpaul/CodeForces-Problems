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
 
    vector<ll> prefix(n);
    ll current=0;
 
    for(int i=0;i<n;i++){
        ll worms;
        cin>>worms;
        current+=worms;
        prefix[i]=current;
    }
    
    ll m;
    cin>>m;
 
    for(int i=0;i<m;i++){
        ll q;
        cin>>q;
        auto it=lower_bound(prefix.begin(),prefix.end(),q);
        ll pile=distance(prefix.begin(),it)+1;
        cout<<pile<<"
";
    }
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