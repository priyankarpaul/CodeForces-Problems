/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
const ll maxX=1e6;
 
 
void solve() {
   
   ll n;
   cin>>n;
   vector<ll> arr(n);
   for(int i=0;i<n;i++) cin>>arr[i];
 
   sort(arr.begin(),arr.end());
 
    if(arr[0]!=1){
        cout<<1<<"
";
        return;
    }
   for(int i=0;i<n-1;i++){
    if(abs(arr[i]-arr[i+1])>1){
        cout<<arr[i]+1<<"
";
        return;
    }
   }
   cout<<arr[n-1]+1<<"
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