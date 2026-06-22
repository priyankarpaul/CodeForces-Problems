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
    multiset<ll> was;
    for (ll i=1;i<=n;i++) {
        was.insert(i);
    }
 
    vector<pair<ll,ll>> ans;
    for (ll i=0;i<n-1;i++) {
        auto it=was.end();
        it--;
        ll a=*it;
        was.erase(it);
        it = was.end();
        it--;
        ll b = *it;
        was.erase(it);
        was.insert((a+b+1)/2);
        ans.pb(make_pair(a,b));
    }
    cout<<*was.begin()<<endl;
    for (ll i=0;i<ans.size();i++) {
        cout<<ans[i].ff<<' '<<ans[i].ss<<"
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}