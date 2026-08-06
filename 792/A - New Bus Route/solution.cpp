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
    for(int i=0;i<n;i++) cin>>arr[i];
 
    sort(arr.begin(),arr.end());
 
    ll mini=INF;
    ll count=0;
    for(int i=0;i<n-1;i++){
         ll diff=arr[i+1]-arr[i];
         if(diff<mini){
            mini=diff;
            count=1;
         }
         else if(diff==mini) count++;
    }
    cout<<mini<<" "<<count<<"
";
}   
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}