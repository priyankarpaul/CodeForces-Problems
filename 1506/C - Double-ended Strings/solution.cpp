/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
void solve() {
    string a,b;
    cin>>a>>b;
 
    ll n=a.size();
    ll m=b.size();
 
    ll ans=0;
    for(ll len=1;len<=min(m,n);len++){
        for(ll i=0;i+len<=n;i++){
            for(ll j=0;j+len<=m;j++){
                if(a.substr(i,len)==b.substr(j,len)){
                    ans=max(ans,len);
                }
            }
        }
    }
    cout<<n+m-(2*ans)<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}