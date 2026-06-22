/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
   
   ll y,k,n;
   cin>>y>>k>>n;
 
   bool flag=false;
   ll first=(y/k+1LL)*k;
 
   for(ll i=first;i<=n;i+=k){
      cout<<i-y<<" ";
      flag=true;
   }
   
   if(!flag) cout<<-1<<"
";
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