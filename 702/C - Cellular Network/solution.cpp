/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
bool check(vector<ll>& arr1,vector<ll>& arr2,ll t){
    ll i=0,j=0;
    ll n=arr1.size();
    ll m=arr2.size();
    while(i<n&&j<m){
        if(abs(arr1[i]-arr2[j])<=t) i++;
        else j++;
    }
    if(n==i) return true;
    return false;
}
 
 
void solve(){
 
    ll n,m;
    cin>>n>>m;
 
    vector<ll> arr1(n);
    vector<ll> arr2(m);
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<m;i++) cin>>arr2[i];
 
    ll low=0;
    ll high=2e9;
    ll ans=-1;
 
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(arr1,arr2,mid)){
           ans=mid;
           high=mid-1;
        }
        else low=mid+1;
    }
    cout<<ans<<"
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