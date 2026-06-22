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
 
   ll total=0;
   ll mini=LLONG_MAX;
 
   vector<ll> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
    total+=arr[i];
    if(arr[i]%2!=0){
       mini=min(mini,arr[i]);
    }
   }
 
   if(total%2!=0){
    cout<<total<<"
";
   }
   else{
    if(mini==LLONG_MAX){
        cout<<0<<"
";
    }
    else cout<<total-mini<<"
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
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}