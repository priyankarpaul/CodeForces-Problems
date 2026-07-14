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
 
    ll currentSum=0;
    ll flag=true;
 
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
 
        ll requiredSum=(1ll*(i+1)*(i+2))/2;
        if(currentSum<requiredSum){
            flag=false;
            break;
        }
    }
 
    if(flag) cout<<"YES
";
    else cout<<"NO
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