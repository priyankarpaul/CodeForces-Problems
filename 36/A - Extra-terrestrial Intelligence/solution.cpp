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
    string s;
    cin>>s;
 
    vector<ll> arr;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            arr.pb(i+1);
        }
    }
     
    ll ans=abs(arr[0]-arr[1]);
    for(ll i=1;i<(arr.size()-1);i++){
        if(ans!=abs(arr[i]-arr[i+1])){
            cout<<"NO
";
            return;
        }
    }
    cout<<"YES
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
// #ifndef ONLINE_JUDGE
     freopen("input.txt",  "r",  stdin);
     freopen("output.txt", "w", stdout);
// #endif
 
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}