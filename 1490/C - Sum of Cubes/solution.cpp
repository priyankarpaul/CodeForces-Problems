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
  
  bool flag=false;
 
  ll low=1;
  ll high=cbrt(n)+1;
 
  while(low<=high){
    double val1=low*low*low;
    double val2=high*high*high;
 
    if(val1+val2>n){
        high--;
    }
    else if(val1+val2<n){
        low++;
    }
    else{
        flag=true;
        break;
    }
  }
  
  if(flag) cout<<"YES
";
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