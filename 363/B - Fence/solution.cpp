/*Author SungJinWoo*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    ll currentSum=0;
    for(int i=0;i<k;i++){
       currentSum+=arr[i];
    }
    ll miniSum=currentSum;
    ll count=1;
    for(int i=k;i<n;i++){
        currentSum=currentSum-arr[i-k]+arr[i];
        if(currentSum<miniSum){
            miniSum=currentSum;
            count=i-k+2;
        }
    }
    cout<<count<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}