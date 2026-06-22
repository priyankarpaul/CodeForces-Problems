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
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   ll ans=0;
   ll count=0;
 
   if(k==0) ans=arr[0]-1;
   else ans=arr[k-1];
 
   for(int i=0;i<n;i++){
    if(arr[i]<=ans) count++;
   }
   if(count!=k||!(1 <= ans && ans<=1000*1000*1000)){
        cout<<"-1
";
        return;
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
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}