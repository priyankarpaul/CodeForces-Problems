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
 
    vector<ll> arr(n-1);
    for(int i=0;i<n-1;i++) cin>>arr[i];
     
    ll a=10000;
    cout<<a;
    for(int i=0;i<n-1;i++){
        a+=arr[i];
        cout<<" "<<a;
    }
    cout<<"
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