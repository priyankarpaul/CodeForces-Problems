/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
ll digitSum(ll x){
    ll sum=0;
    while(x){
        ll digit=x%10;
        sum+=digit;
        x/=10;
    }
    return sum;
}
 
void solve() {
 
  ll k;
  cin>>k;
  string n;
  cin>>n;
 
  ll sum=0;
  vector<ll> gain;
 
  for(auto x:n){
    ll digit=x-'0';
    sum+=digit;
    gain.pb(9-digit);
  }
 
  if(sum>=k){
    cout<<0<<"
";
    return;
  }
 
  ll element=k-sum;
 
  sort(gain.rbegin(),gain.rend());
 
  ll ans=0;
  ll add=0;
  for(auto x:gain){
    add+=x;
    ans++;
    if(add>=element){
        cout<<ans<<"
";
        return;
    }
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