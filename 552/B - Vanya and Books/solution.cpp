/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
ll digit(ll n){
    ll count=0;
    while(n){
        n/=10;
        count++;
    }
    return count;
}
 
void solve() {
   
   ll n;
   cin>>n;
 
   ll count=digit(n);
 
   ll ans=n*count+count-1;
   ll power=1;
 
   for(int i=0;i<count-1;i++){
     power*=10;
     ans-=power;
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