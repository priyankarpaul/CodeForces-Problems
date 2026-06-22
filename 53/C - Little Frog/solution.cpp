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
 
   ll low=1;
   ll high=n;
 
   if(n==1){
    cout<<1<<"
";
    return;
   }
 
  if(n%2==1){
    while(low<=high-1){
       cout<<low<<" "<<high<<" ";
       low++;
       high--;
    }
      cout<<n-(n/2);
  }
  else{
      while(low<=high-1){
       cout<<low<<" "<<high<<" ";
       low++;
       high--;
    }
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