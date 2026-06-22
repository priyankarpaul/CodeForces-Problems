/*Author SungJinWoo*/
 
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
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    if(n==2){
        cout<<arr[0]<<" "<<arr[1]<<"
";
        return;
    }
    ll pos=0;
    ll mini=LLONG_MAX;
    for(int i=1;i<n;i++){
        if(mini>abs(arr[i]-arr[i-1])){
            pos=i;
            mini=abs(arr[i]-arr[i-1]);
        }
    }
    for(int i=pos;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<pos;i++){
        cout<<arr[i]<<" ";
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