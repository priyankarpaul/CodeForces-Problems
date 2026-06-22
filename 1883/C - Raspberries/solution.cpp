/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
   
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    ll evenCount=0;
    ll ans=LLONG_MAX;
    for(int i=0;i<n;i++){
     cin>>arr[i];
     if(arr[i]%2==0) evenCount++;
     if(arr[i]%k==0) ans=0;
     ans=min(ans,(k-arr[i]%k));
    }
 
    if(k==4){
       if(evenCount>=2) ans=min(ans,0ll);
       else if(evenCount==1) ans=min(ans,1ll);
       else if(evenCount==0) ans=min(ans,2ll);
    }
   
    cout<<ans<<"
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