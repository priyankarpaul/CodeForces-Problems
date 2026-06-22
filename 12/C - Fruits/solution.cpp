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
   
    ll n,m;
    cin>>n>>m;
 
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    ll miniTotal=0;
    ll maxiTotal=0;
  
    vector<string> str(m);
    map<string,ll> mp;
    for(int i=0;i<m;i++) {
        cin>>str[i];
        mp[str[i]]++;
    }
 
    vector<ll> elements;
    for(auto x:mp){
      elements.pb(x.ss);
    }
    
    sort(elements.rbegin(),elements.rend());
    sort(arr.begin(),arr.end());
    for(ll i=0;i<elements.size();i++)  miniTotal+=arr[i]*elements[i];
 
 
    sort(arr.rbegin(),arr.rend());
    for(ll i=0;i<elements.size();i++) maxiTotal+=arr[i]*elements[i];
    
    
    cout<<miniTotal<<" "<<maxiTotal<<"
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