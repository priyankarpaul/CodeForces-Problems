/*Author SungJinWoo*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
bool digit(ll n){
    if(n%10!=0){
        return true;
    }
    else return false;
}
 
void solve() {
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    ll count=1;
    ll ans=1;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]>k){
            count=1;
        }
        else count++;
        ans=max(ans,count);
    }
    cout<<n-ans<<"
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