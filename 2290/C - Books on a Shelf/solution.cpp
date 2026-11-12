/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
void solve(){
    
   ll n;
   cin>>n;
 
   vector<ll> left,right,hidden;
   map<ll,ll> mp;
 
   for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    mp[x]++;
   }
 
   for(auto x:mp){
       left.pb(x.ff);
       if(x.ss>=2) right.pb(x.ff);
       for(int i=2;i<x.ss;i++) hidden.pb(x.ff);
   }
 
   // for(auto x:hidden) cout<<x<<" ";
   //  cout<<"
";
 
   ll k=left.size()+right.size();
   cout<<k<<"
";
 
   for(auto x:left) cout<<x<<" ";
 
   for(int x:hidden) cout<<x<<" ";
 
   reverse(right.begin(),right.end());
   for(auto x:right) cout<<x<<" ";
   cout<<"
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