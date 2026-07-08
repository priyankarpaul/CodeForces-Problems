/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
bool check(const vector<ll>& arr,ll n,ll k,ll x){
    ll countOdd=0;
    for(int i=0;i<n;i++){
        if(countOdd%2==0){
            if(arr[i]<=x){
                countOdd++;
            }
        }
        else countOdd++;
    }
    if(countOdd>=k) return true;
 
    ll countEven=0;
    for(int i=0;i<n;i++){
        if(countEven%2==1){
            if(arr[i]<=x){
                countEven++;
            }
        }
        else countEven++;
    }
    if(countEven>=k) return true;
 
    return false;
}
 
void solve() {
    
    ll n,k;
    cin>>n>>k;
 
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    ll low=1;
    ll high=1e9;
 
    ll ans=high;
 
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(arr,n,k,mid)){
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