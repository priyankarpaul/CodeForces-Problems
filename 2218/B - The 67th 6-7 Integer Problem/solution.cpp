/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
 
    ll sum=0;
    ll n=7;
    vector<ll> arr(n);
    ll maxi=LLONG_MIN;
    for(int i=0;i<n;i++){
       cin>>arr[i];
       sum+=arr[i];
       maxi=max(maxi,arr[i]);
    }
    cout<<(2*maxi)-sum<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}