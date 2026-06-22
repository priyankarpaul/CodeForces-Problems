/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
 
  ll n,m;
  cin>>n>>m;
  vector<ll> arr(m);
  for(int i=0;i<m;i++) cin>>arr[i];
 
  sort(arr.begin(),arr.end());
  if (m>0&&(arr[0]==1||arr[m-1]==n)){
      cout<<"NO
";
      return;
  }
  
  for(int i=0;i<m;i++){
    if(arr[i]+1==arr[i+1]&&arr[i]+2==arr[i+2]){
        cout<<"NO
";
        return;
    }
  }
  cout<<"YES
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