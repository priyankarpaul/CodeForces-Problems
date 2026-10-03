/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
ll upperBound(vector<ll>& arr,ll t){
    ll low=0;
    ll high=arr.size()-1;
    ll res=arr.size();
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(arr[mid]>t){
            res=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return res;
}
 
void solve(){
 
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=abs(arr[i]);
    }
    ll count=0;
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<n;i++){
        auto upper=upperBound(arr,arr[i]*2);
        count+=upper-i-1;
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