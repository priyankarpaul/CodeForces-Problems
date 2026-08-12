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
    vector<ll> arr(n+2,0);
    for(int i=1;i<=n;i++) cin>>arr[i];
 
    ll count=0;
    for(int i=1;i<=n;i++){
        ll maxiNeighbour=max(arr[i-1],arr[i+1]);
        if(arr[i]>maxiNeighbour){
            count+=(arr[i]-maxiNeighbour);
            arr[i]=maxiNeighbour;
        }
    }
 
    ll length=0;
    for(int i=1;i<=n+1;i++){
        length+=abs(arr[i]-arr[i-1]);
    }
 
    cout<<count+length<<"
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