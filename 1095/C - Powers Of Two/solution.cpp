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
   if(n<k){
    cout<<"NO"<<"
";
    return;
   }
   vector<ll> ans;
   for(int i=0;i<32;i++){
    if(n&(1<<i)) ans.pb(1<<i);
   }
   ll sizeOfAns=ans.size();
   if(sizeOfAns>k){
    cout<<"NO
";
    return;
   }
   ll ptr=0;
   while(sizeOfAns<k){
       while(ans[ptr]==1) ptr++;
       ans[ptr]/=2;
       ans.pb(ans[ptr]);
       sizeOfAns++;
   }
   cout<<"YES
";
   for(int i=0;i<k;i++){
    cout<<ans[i]<<" ";
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