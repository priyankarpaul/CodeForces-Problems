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
 
   ll total=0;
   vector<ll> arr(n); 
   for(int i=0;i<n;i++){
    cin>>arr[i];
    total+=arr[i];
   }
 
   if(total%n!=0){
    cout<<0<<"
";
    return;
   }
 
   ll target=total/n;
   vector<ll> indexes;
 
   for(int i=0;i<n;i++){
    if(arr[i]==target) indexes.pb(i+1);
   }
   
   cout<<indexes.size()<<"
";
   for(auto x:indexes){
    cout<<x<<" ";
   }
   cout<<"
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