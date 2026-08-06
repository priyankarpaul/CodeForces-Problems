/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
void solve() {
 
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
 
    vector<ll> differ(n-1);
    for (ll i=0;i<n-1;i++){
        differ[i]=arr[i+1]-arr[i];
    }
 
    ll i= 0;
    while(i<n-1){
        ll j=i;
        while(j<n-1&&(abs(differ[j])%2==abs(differ[i])%2)){
            j++;
        }
        sort(differ.begin()+i,differ.begin()+j);
        i=j;
    }
 
    vector<ll> ans(n);
    ans[0]=arr[0];
    for(int i=0;i<n-1;i++){
        ans[i+1]=ans[i]+differ[i];
    }
 
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
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