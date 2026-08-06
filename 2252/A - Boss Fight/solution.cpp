/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
void solve() {
 
    ll n;
    cin>>n;
    vector<ll> arr(n);
    ll total=0;
 
    map<ll,ll> mp; 
    ll highest=0;
    ll maxi=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
        mp[arr[i]]++;
        if(mp[arr[i]]>maxi){
            maxi=mp[arr[i]];
            highest=arr[i];
        }
    }
    ll waste=max(0ll,2*maxi-n-2);
    ll ans=total-waste*highest;
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