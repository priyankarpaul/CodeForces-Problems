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
 
  vector<ll> arr(n);
  ll oddCount=0;
  for(int i=0;i<n;i++){
   cin>>arr[i];
   if(arr[i]%2!=0) oddCount++;
  }
 
  if(oddCount%2==0){
    cout<<"YES
";
    return;
  }
 
  sort(arr.begin(),arr.end());
  bool flag=false;
  for(int i=0;i<n-1;i++){
      if(arr[i+1]-arr[i]==1){
        flag=true;
        break;
      }
  }
 
  if(flag){
    cout<<"YES
";
  }
  else cout<<"NO
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