/*Author SungJinWoo*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
bool digit(ll n){
    if(n%10!=0){
        return true;
    }
    else return false;
}
 
void solve() {
    ll n;
    cin>>n;
    ll q;
    cin>>q;
    vector<ll> arr(n+1);
    for(int i=1;i<=n;i++) cin>>arr[i];
    vector<ll> prefix(n+1);
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;
        ll res=prefix[n]-(prefix[r]-prefix[l-1])+k*(r-l+1);
        if(res%2==1){
            cout<<"YES
";
        }
        else cout<<"NO
";
    }
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