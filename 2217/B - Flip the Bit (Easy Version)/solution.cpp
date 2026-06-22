/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
   
   ll n;
   cin>>n;
   ll k;
   cin>>k;
   ll ans=0;
   vector<ll> arr(n);
   for(int i=0;i<n;i++) cin>>arr[i];
   ll p;cin>>p;
   p-=1;
   ll temp=arr[p];
   ll left=0,right=0;
   bool flag=false;
   for(int i=0;i<p;i++){
    if(arr[i]!=temp){
      if(!flag){
        left++;
        flag=true;
      }
    }
    else{
        flag=false;
    }
   }
   flag=false;
   for(int i=p+1;i<n;i++){
      if(arr[i]!=temp){
        if(!flag){
            right++;
            flag=true;
        }
      }
      else{
        flag=false;
      }
   }
   ans=max(left,right);
   cout<<2*ans<<"
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