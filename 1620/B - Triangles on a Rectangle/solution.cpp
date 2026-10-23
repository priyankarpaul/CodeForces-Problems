/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
void solve(){
    ll w,h;
    cin>>w>>h;
    ll area=LLONG_MIN;
 
    for(int i=0;i<4;i++){
        ll k;cin>>k;
        ll f,l;
        for(int j=0;j<k;j++){
            ll x;cin>>x;
            if(j==0) f=x;
            if(j==k-1) l=x;
        }
        area=max(area,(l-f)*(i<=1?h:w));
    }
    cout<<area<<"
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