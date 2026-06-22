/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
   
    string s;
    cin>>s;
    string s1;
    cin>>s1;
 
    ll n=s.size();
 
    if(s.size()!=s1.size()){
        cout<<"NO
";
        return;
    }
 
    vector<ll> idxes;
    for(int i=0;i<n;i++){
        if(s[i]!=s1[i]){
            idxes.pb(i);
        }
    }
 
    if(idxes.size()==2){
        ll x=idxes[0];
        ll y=idxes[1];
        if(s[x]==s1[y]&&s[y]==s1[x]){
            cout<<"YES
";
            return;
        }
    }
    
    cout<<"NO
";
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
     freopen("input.txt",  "r",  stdin);
     freopen("output.txt", "w", stdout);
#endif
 
    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}