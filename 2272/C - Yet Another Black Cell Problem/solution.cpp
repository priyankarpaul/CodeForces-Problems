/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
 
bool check(vector<ll>& arr,ll n,ll x,ll k){
    vector<ll> v;
    for(int i=0;i<n;i++){
        bool left=(i==0||arr[i]-arr[i-1]>k);
        bool right=(i==n-1||arr[i+1]-arr[i]>k);
 
        if(left&&right) v.pb(arr[i]);
    }
 
    ll req=0;
    ll i=0;
    ll m=v.size();
 
    while(i<m) {
        ll first=v[i];
        req++;
        while(i<m&&v[i]-first<=2*k){
            i++;
        }
    }
    return req<=x;
}
 
void solve(){
    
    ll n,x;
    cin>>n>>x;
    vector<ll> arr(n);
 
    for(int i=0;i<n;i++) cin>>arr[i];
    ll low=1;
    ll high=1e12;
    ll ans=high;
 
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(arr,n,x,mid)){
            ans=mid;
            high=mid-1;
        } 
        else  low=mid+1;
    }
 
    cout<<ans<<"
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