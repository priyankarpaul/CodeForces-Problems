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
   vector<ll> arr(n);
   for(int i=0;i<n;i++) cin>>arr[i];
 
   vector<pair<ll,ll>> indices;
   
   for(int i=0;i<n;i++){
    ll miniIdx=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[miniIdx]){
            miniIdx=j;
        }
    }
    if(miniIdx!=i){
        indices.pb({i,miniIdx});
        swap(arr[i],arr[miniIdx]);
    }
   }
   
   cout<<indices.size()<<"
";
   for(auto x:indices){
    cout<<x.ff<<" "<<x.ss<<"
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