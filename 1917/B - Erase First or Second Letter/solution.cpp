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
     string s;
     cin>>s;
     ll count=0;
     ll ans=0;
     vector<ll> distinct(n,0);
     map<char,ll> mp;
     for(int i=0;i<n;i++){
        mp[s[i]]++;
        if(mp[s[i]]==1){
            count++;
        }
        distinct[i]=count;
     }
     for(int i=0;i<n;i++){
        ans+=distinct[i];
     }
    cout<<ans<<"
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