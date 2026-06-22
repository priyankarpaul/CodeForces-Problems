/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
ll lowerBound(vector<ll> &arr,ll n,ll target){
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
 
ll upperBound(vector<ll> &arr,ll n,ll target){
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
   
    ll n;
    cin>>n;
    if(n>45){
        cout<<-1<<"
";
        return;
    }
    vector<ll> arr;
    for(int i=9;i>=1;i--){
        if(n>=i){
         arr.pb(i);
         n-=i;
        }
    }
    sort(arr.begin(),arr.end());
    for(auto x:arr){
        cout<<x;
    }
    cout<<"
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