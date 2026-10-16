/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
 
void solve(){
 
   ll n;cin>>n;
   ll k;cin>>k;
   vector<ll> arr(n);
   vector<ll> res(n+1,0);
   for(int i=0;i<n;i++) cin>>arr[i];
 
   ll currentSum=0;
   ll count=0;
 
 
   for(int i=1;i<=n;i++){
       currentSum=(currentSum+arr[i-1])%k;
       res[i]=currentSum;
   }
 
   vector<ll> cnt(k,0);
   for(int i=k+1;i<=n;i++){
    ll j=i-k-1;
    cnt[res[j]]++;
    count+=cnt[res[i]];
   }
 
   cout<<count<<"
";
    
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}