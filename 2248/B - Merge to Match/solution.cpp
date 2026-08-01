/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
ll lowerbound(vector<ll> &arr,ll n, ll target){
    ll ans=n;
    ll low=0;
    ll high=n-1;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(arr[mid]>=target){
          ans=min(ans,mid);
          high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
 
ll upperbound(vector<ll> &arr,ll n, ll target){
    ll ans=n;
    ll low=0;
    ll high=n-1;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(arr[mid]>target){
          ans=min(ans,mid);
          high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
 
 
void solve() {
    
    ll n,m;
    cin>>n>>m;
 
    vector<ll> arr(n),brr(m);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<m;i++) cin>>brr[i];
    
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
 
    bool flag;
    if(n>=2*m) flag=true;
    else flag=false;
 
    if(flag){
        for(int i=0;i<m;i++){
            ll low=lowerbound(arr,n,brr[i]);
            if(low<i+1){
               flag=false;
               break;
            }
        }
    }
 
    if(flag){
        for(int i=0;i<m;i++){
            ll index=upperbound(arr,n,brr[m-i-1]);
            ll high=n-index;
            if(high<i+1){
               flag=false;
               break;
            }
        }
    }
 
    if(flag) cout<<"YES
";
    else cout<<"NO
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