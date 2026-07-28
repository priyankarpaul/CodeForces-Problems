/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
    
    ll n;
    cin>>n;
    vector<ll> arr(n+1);
    for(int i=1;i<=n;i++) cin>>arr[i];
 
    vector<vector<ll>> pre(n+1,vector<ll>(n+2,0));
    for(int i=1;i<=n;i++){
        for(int x=1;x<=n+1;x++){
           pre[i][x]=pre[i-1][x]+(arr[i]<x?1:0);
        }
    }
 
    ll total=0;
    for(int j=1;j<=n;j++){
        for(int k=j+1;k<=n;k++){
            ll count1=pre[j-1][arr[k]];
            ll count2=(arr[j]-1)-pre[k][arr[j]];
            total+=count1*count2;
        }
    }
    cout<<total<<"
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