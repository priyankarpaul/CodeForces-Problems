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
    ll miniOdd=LLONG_MAX;
    ll maxiEven=LLONG_MIN;
    
    for(int i=0;i<n;i++) cin>>arr[i];
    
    for(int i=0;i<n;i++){
        if(i%2==0) miniOdd=min(miniOdd,arr[i]);
        else maxiEven=max(maxiEven,arr[i]);
    }
 
    if(n%2==0&&(miniOdd-maxiEven)>=2) cout<<"YES
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