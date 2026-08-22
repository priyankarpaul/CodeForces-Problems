/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    ll n;cin>>n;
    ll ans=1,miniTime=LLONG_MAX;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        ll rounds=x/n;
        ll currentTime=rounds*n+i;
 
        if(x>currentTime) currentTime+=n;
 
        if(currentTime==-1||currentTime<miniTime){
            miniTime=currentTime;
            ans=i+1;
        }
    }
    
    cout<<ans<<"
";
    
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}