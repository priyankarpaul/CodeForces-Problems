/*author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
 
const ll MOD = 1e9 + 7;
const ll InF = 1e18;
 
void solve(){
 
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    vector<ll> ans(n,0);
    ll cream=0;
 
    for(int i=n-1;i>=0;i--){
        cream=max(cream,arr[i]);
        if(cream>0){
            ans[i]=1;
            cream--;
        }
    }
 
    for (auto x:ans){
        cout<<x<<" ";
    }
    cout<<"
";
}   
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}