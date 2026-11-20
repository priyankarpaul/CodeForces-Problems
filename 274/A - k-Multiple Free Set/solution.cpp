/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
const vector<ll> root={0,1,-1,-1,-1,-1,9,-1,8,6};
 
 
bool binarySearch(vector<ll>& s,ll target){
    ll n=s.size();
    ll low=0;
    ll high=n-1;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(s[mid]==target) return true;
        else if(s[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return false;
}
 
void solve(){
 
    ll n;
    cin>>n;
 
    ll k;
    cin>>k;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    sort(arr.begin(),arr.end());
 
    vector<ll> s;
    for(int i=0;i<n;i++){
        if(arr[i]%k!=0) s.pb(arr[i]);
        else{
            if(!binarySearch(s,arr[i]/k)){
                s.pb(arr[i]);
            }
        }
    }
 
    cout<<s.size()<<"
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