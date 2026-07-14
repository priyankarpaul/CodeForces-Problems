/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
    ll n,x,y;
    cin>>n>>x>>y;
 
    vector<ll> arr(n+1);
    for(int i=1;i<=n;i++) cin>>arr[i];
 
    ll g=__gcd(x,y);
    bool flag=true;
 
    for(int i=1;i<n;i++){
        if(i%g!=arr[i]%g){
            flag=false;
            break;
        }
    }
    if(!flag) cout<<"NO
";
    else cout<<"YES
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}