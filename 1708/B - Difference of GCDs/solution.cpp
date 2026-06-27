/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
 
   ll n,l,r;
   cin>>n>>l>>r;
 
   vector<ll> arr(n+1);
   bool possible=true;
 
   for(int i=1;i<=n;i++){
    ll val=(r/i)*i;
 
    if(val<l){
      possible=false;
      break;
    }
    arr[i]=val;
   }
 
   if(!possible){
    cout<<"NO
";
   }
   else{
    cout<<"YES
";
    for(int i=1;i<=n;i++){
      cout<<arr[i]<<(i==n?"":" ");
    }
    cout<<"
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