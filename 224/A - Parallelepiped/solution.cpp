/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
  
  ll a,b,c;
  cin>>a>>b>>c;
 
  ll x=sqrt(a*b/c);
  ll y=sqrt(a*c/b);
  ll z=sqrt(b*c/a);
 
  ll ans=(4*(x+y+z));
 
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