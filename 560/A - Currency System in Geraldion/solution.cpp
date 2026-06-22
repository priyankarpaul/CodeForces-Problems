/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
ll lowerBound(vector<ll>& arr,ll n,ll target){
    ll low=0;
    ll high=n-1;
    ll ans=n;
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
 
ll upperBound(vector<ll>& arr,ll n,ll target){
    ll low=0;
    ll high=n-1;
    ll ans=n;
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
 
   ll n;
   cin>>n;
   for(int i=0;i<n;i++){
    ll x;cin>>x;
    if(x==1){
        cout<<-1<<"
";
        return;
    }
   }
   cout<<1<<"
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