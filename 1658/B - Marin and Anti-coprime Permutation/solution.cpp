/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
    ll n;
    cin>>n;
 
    if(n%2!=0){
        cout<<0<<"
";
        return;
    }
 
    ll fact=1;
    for(int i=1;i<=n/2;i++){
        fact=(fact*i)%998244353;
    }
    ll ans=(fact*fact)%998244353;
    cout<<ans<<"
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