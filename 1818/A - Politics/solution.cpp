/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
int fib(ll n){
    if(n==1||n==0) return n;
    return fib(n-1)+fib(n-2);
}
 
void solve() {
    ll n,k;
    cin>>n>>k;
 
    vector<string> arr(n);
    ll ans=n;
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]!=arr[0]) ans--;
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}