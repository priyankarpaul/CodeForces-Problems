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
   ll s;cin>>s;
   vector<ll> arr(n);
   for(int i=0;i<n;i++) cin>>arr[i];
    ll sum=0;
 
   sort(arr.begin(),arr.end());
   for(int i=0;i<n-1;i++){
    sum+=arr[i];
    if(sum>s){
        cout<<"NO
";
        return;
    }
   }
 
   cout<<"YES"<<"
";
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}