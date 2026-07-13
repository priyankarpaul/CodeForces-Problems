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
 
    ll ans=0;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    ll low=0;
    while(low<n&&arr[low]==arr[0]) low++;
 
    if(low==n){
        cout<<0<<"
";
        return;
    }
 
    ll high=0;
    while(high<n&&arr[n-1-high]==arr[n-1]){
        high++;
    }
    
    if(arr[0]==arr[n-1]){
        cout<<n-low-high<<"
";
    }
    else{
        cout<<min(n-low,n-high)<<"
";
    }
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