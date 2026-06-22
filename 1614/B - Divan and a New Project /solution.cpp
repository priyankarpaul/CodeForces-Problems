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
  vector<pair<ll,ll>> arr;
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    arr.pb({x,i});
  }
 
  vector<ll> ans(n);
  sort(arr.begin(),arr.end());
 
  ll current=1;
  ll temp=0;
  
  for(int i=n-1;i>=0;i--){
    ans[arr[i].ss]=current;
    temp+=(2*(arr[i].ff*abs(current)));
    if(current>0){
        current*=-1;
    }
    else{
        current*=-1;
        current++;
    }
  }
  cout<<temp<<"
";
  cout<<0<<" ";
  for(auto x:ans){
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}