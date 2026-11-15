/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
void solve(){
    
    ll n; 
    ll k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll zeroCount=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') zeroCount++;
    }
    zeroCount=min(max(zeroCount,n-zeroCount)+k,n);
    ll oneCount=n-zeroCount;
    ll ans=1ll*zeroCount*(zeroCount+1)/2+1ll*oneCount*(oneCount+1)/2+1;
    cout<<ans<<"
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