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
    bool flag=true;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    for(int i=0;i<n-1;i++) {
       if(arr[i]<=arr[i+1]) flag=false;
    }
 
    if(flag) cout<<"NO
";
    else cout<<"YES
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