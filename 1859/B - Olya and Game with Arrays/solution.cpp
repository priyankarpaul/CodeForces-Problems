/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    ll n;
    cin>>n;
    vector<pair<ll,ll>> first2Mins;
    for(ll i=0;i<n;i++){
        ll m;
        cin>>m;
        vector<ll> arr(m);
        for(ll j=0;j<m;j++){
            cin>>arr[j];
        }
            sort(arr.begin(),arr.end());
            first2Mins.pb({arr[1],arr[0]});
    }
    sort(first2Mins.begin(),first2Mins.end());
    ll ans=0;
    ll firstMin=first2Mins[0].ss;
    for(ll i=1;i<n;i++){
        ans+=first2Mins[i].ff;
        firstMin=min(firstMin,first2Mins[i].ss);
    }
    ans+=firstMin;
    cout<<ans<<"
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