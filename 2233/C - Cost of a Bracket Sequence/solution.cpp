/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
 
    vector<ll> openIdx,closeIdx;
 
    for(int i=0;i<n;i++){
        if(s[i]=='(') openIdx.pb(i);
        else if(s[i]==')') closeIdx.pb(i);
    }
 
    ll mini=n+1;
    string ans="";
 
    for(ll i=0;i<=k;i++){
        ll x=min((ll)i,(ll)openIdx.size());
        ll y=min(k-x,(ll)closeIdx.size());
        vector<bool> remove(n,false);
        for(ll j=0;j<x;j++){
           remove[openIdx[j]]=true;
        }
        for(int j=0;j<y;j++){
            remove[closeIdx[closeIdx.size()-1-j]]=true;
        }
        ll current=0;
        ll openCount=0;
 
        for(int k=0;k<n;k++){
             if(remove[k]) continue;
             if(s[k]=='(') openCount++;
             else if(s[k]==')'){
                 if(openCount>0){
                    openCount--;
                    current+=1;
                }
            }
        }
 
        if(current<mini){
            mini=current;
            ans="";
            for(int i=0;i<n;i++){
                ans+=(remove[i]?'1':'0');
            }
        }
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