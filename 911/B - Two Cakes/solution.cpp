/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
void solve(){
 
    ll n,a,b;
    cin>>n>>a>>b;
 
    ll mini=10000;
    ll maxi=0;
 
    for(int i=1;i<n;i++){
        ll piece1=a/i;
        ll piece2=b/(n-i);
        mini=min(piece1,piece2);
        maxi=max(maxi,mini);
    }
    cout<<maxi<<"
";
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}