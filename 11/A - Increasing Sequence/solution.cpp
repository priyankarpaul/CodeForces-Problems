/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
bool tri(ll a,ll b,ll c){
    return((a+b>c)&&(a+c>b)&&(b+c>a));
}
 
bool seg(ll a,ll b,ll c){
    return ((a==b+c)||(b==a+c)||(c==a+b));
}
 
void solve() {
   
    ll n;
    cin>>n;
    ll d;
    cin>>d;
    
    ll count=0;
 
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    for(int i=1;i<n;i++){
        if(arr[i]<=arr[i-1]){
            ll diff=arr[i-1]-arr[i]+1;
            ll moves=(diff+d-1)/d;
 
            count+=moves;
            arr[i]+=moves*d;
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