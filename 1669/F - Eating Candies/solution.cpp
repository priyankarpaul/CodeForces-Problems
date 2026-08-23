/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
void solve() {
    ll n;cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    ll i=0;
    ll j=n-1;
    ll alice=arr[0];
    ll bob=arr[n-1];
 
    ll ans=0;
    while(i<j){
        if(alice<bob){
            i++;
            if(i==j) break;
            alice+=arr[i];
        }
        else if(alice>bob){
            j--;
            if(i==j) break;
            bob+=arr[j];
        }
        else{
            ans=max(ans,i+1+n-j);
            i++;
            j--;
            if(i>=j) break;
            alice+=arr[i];
            bob+=arr[j];
        } 
    }
    cout<<ans<<"
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