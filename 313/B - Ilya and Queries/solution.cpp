/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
bool digit(ll n){
    if(n%10!=0){
        return true;
    }
    else return false;
}
 
ll lcmm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}
 
void solve() {
   string s;cin>>s;
   vector<ll> dp(100005);
   ll count=0;
   ll n=s.size();
   for(int i=1;i<n;i++){
       if(s[i]==s[i-1]) count++;
       dp[i]=count;
   }
 
   ll q;cin>>q;
   while(q--){
    ll l,r;
    cin>>l>>r;
    cout<<dp[r-1]-dp[l-1]<<"
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