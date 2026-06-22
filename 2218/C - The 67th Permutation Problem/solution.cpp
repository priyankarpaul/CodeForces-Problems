/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
 
    ll n;
    cin>>n;
 
    ll left=1,right=n*3;
    vector<ll> arr;
    arr.reserve(n*3);
    
    for(int i=1;i<=n;i++){
        arr.pb(left);
        arr.pb(right-1);
        arr.pb(right);
        left++;
        right-=2;
    }
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<"
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