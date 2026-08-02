/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
bool check(ll mid,ll n,const vector<ll>& arr,const vector<ll>& brr){
    ll invitedCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=mid-1-invitedCount&&brr[i]>=invitedCount) invitedCount++;
        if(invitedCount>=mid) return true;
    }
    return invitedCount>=mid;
}
 
void solve() {
    
    ll n;cin>>n;
    vector<ll> arr(n),brr(n);
    for(int i=0;i<n;i++) cin>>arr[i]>>brr[i];
 
    ll low=1,high=n;
    ll ans=0;
 
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(mid,n,arr,brr)){
          ans=mid;
          low=mid+1;
        }
        else high=mid-1;
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