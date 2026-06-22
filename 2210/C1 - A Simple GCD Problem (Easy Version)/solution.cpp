/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
ll gcd(ll a,ll b){
    return __gcd(a,b);
}
 
ll lcm(ll a,ll b){
    if(a==0||b==0) return max(a,b);
    return a/__gcd(a,b)*b;
}
 
void solve(){
     
    ll n;
    cin>>n;
 
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<ll> brr(n);
    for(int i=0;i<n;i++) cin>>brr[i];
    
    ll count=0;
    
    for(int i=0;i<n;i++){
        ll l,r;
        if(i<n-1) r=__gcd(arr[i],arr[i+1]);
        else r=1LL;
        if(i>0) l=__gcd(arr[i-1],arr[i]);
        else l=1LL; 
        ll Lcm=lcm(l,r);
        if(Lcm<arr[i]) count++;
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}