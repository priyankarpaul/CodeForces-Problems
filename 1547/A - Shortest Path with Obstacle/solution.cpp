/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
    vector<ll> arr(2),brr(2),frr(2);
    cin>>arr[0]>>arr[1];
    cin>>brr[0]>>brr[1];
    cin>>frr[0]>>frr[1];
 
    ll mini1=min(arr[1],brr[1]);
    ll maxi1=max(arr[1],brr[1]);
 
    ll mini0=min(arr[0],brr[0]);
    ll maxi0=max(arr[0],brr[0]);
 
    ll ans=abs(arr[0]-brr[0])+abs(arr[1]-brr[1]);
    if ((arr[0] == brr[0]&&arr[0]==frr[0]&&mini1<frr[1]&&frr[1]<maxi1)
        ||(arr[1]==brr[1]&&arr[1]==frr[1]&&mini0<frr[0]&&frr[0]<maxi0)){
        ans+=2;
    }
    cout<<ans<<"
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