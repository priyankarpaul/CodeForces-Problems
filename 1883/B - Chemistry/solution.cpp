/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
 
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_map<char,ll> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    ll count=0;
    for(auto x:mp){
       if(x.ss%2!=0){
        count++;
       }
    }
    if(count>k+1) cout<<"NO
";
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}