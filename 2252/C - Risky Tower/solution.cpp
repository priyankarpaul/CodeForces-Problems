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
 
    ll n,m;
    cin>>n>>m;
 
    vector<ll> arr(n);
    for(ll i=0;i< n; i++) cin>>arr[i];
 
    vector<vector<ll>> brr(n, vector<ll>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>brr[i][j];
        }
    }
 
    ll minPieces=m;
    priority_queue<ll,vector<ll>,greater<ll>> pool;
    ll current=0;
 
    for(int k=n-1;k>=0;k--){
        for(ll j=0;j<m;j++){
            pool.push(brr[k][j]);
            current+=brr[k][j];
        }
        while(!pool.empty()&&(current-pool.top()>=arr[k])){
            current-=pool.top();
            pool.pop();
        }
        if(current>=arr[k]){
            minPieces=min(minPieces,(ll)pool.size());
        }
    }
    cout<<minPieces<<"
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