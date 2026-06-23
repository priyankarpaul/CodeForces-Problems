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
 
  ll n;
  cin>>n;
 
  vector<ll> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  
  ll aliveCount=0;
  ll furthest=n+1;
 
  for(int i=n;i>=1;i--){
    if(i<furthest){
        aliveCount++;
    }
    furthest=min(furthest,i-arr[i-1]);
  }
 
  cout<<aliveCount<<"
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