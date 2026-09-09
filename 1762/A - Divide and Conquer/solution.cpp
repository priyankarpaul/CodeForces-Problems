/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    
    ll sum=accumulate(arr.begin(),arr.end(),0);
    ll ans=LLONG_MAX;
 
    if(sum%2==0){
        cout<<0<<"
";
        return;
    }
 
    for(auto x:arr){
        ll count=0;
        ll current=x;
        while(current%2==x%2){
            count++;
            current/=2;
        }
        ans=min(ans,count);
    }
    cout<<ans<<"
";
    
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}