/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
 
void solve(){
 
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    map<ll,ll> mp;
    ll m=n-4;
    vector<ll> values(m);
    ll count=0;
 
    for(int i=0;i<m;i++){
        values[i]=arr[i]+arr[i+2]-arr[i+4];
        count+=mp[values[i]];
        mp[values[i]]++;
    }
 
    ll invalid=0;
    for(int i=0;i<m;i++){
        if(i+2<m&&values[i]==values[i+2]) invalid++;
        if(i+4<m&&values[i]==values[i+4]) invalid++;
    }
    
    cout<<count-invalid<<"
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