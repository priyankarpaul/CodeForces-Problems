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
  for(int i=0;i<n;i++) cin>>arr[i];
 
  ll fiveCount=0;
  ll zeroCount=0;
 
  for(int i=0;i<n;i++){
    if(arr[i]==5) fiveCount++;
    else zeroCount++;
  }
 
  if(zeroCount==0){
    cout<<-1<<"
";
    return;
  }
 
  ll usingFive=(fiveCount/9)*9;
 
  if(usingFive==0){
    cout<<0<<"
";
    return;
  }
  
  for(int i=0;i<usingFive;i++){
    cout<<5;
  }
  for(int i=0;i<zeroCount;i++){
    cout<<0;
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
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}