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
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=abs(arr[i]);
    }
    sort(arr.begin(),arr.end());
    ll ans=0;
    ll count=0;
    
    for(int i=0;i<n;i++){
        auto upper=upper_bound(arr.begin(),arr.end(),2*arr[i]);
 
        count+=upper-arr.begin()-i-1;
        ans+=count;
    }
    cout<<count<<"
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