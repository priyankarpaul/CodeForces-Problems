/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
 
  ll n,k;
  cin>>n>>k;
 
  vector<ll> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
 
  vector<ll> w(k);
 
  ll ones=0;
  for(int i=0;i<k;i++){
    cin>>w[i];
    if(w[i]==1){
        ones++;
    }
  }
 
  sort(arr.begin(),arr.end());
  sort(w.begin(),w.end());
 
  ll total=0;
  ll high=n-1;
 
 
  for(int i=0;i<ones;i++){
    total+=2*arr[high];
    high--;
  }
 
  ll low=0;
  for(int i=k-1;i>=ones;i--){
      total+=arr[high];
      high--;
      total+=arr[low];
      low+=(w[i]-1);
  }
 
  cout<<total<<"
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