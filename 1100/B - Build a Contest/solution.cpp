/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
    ll n,m;
    cin>>n>>m;
 
    vector<ll> count(n+1,0);
 
    ll distinct=0;
    ll currentRound=1;
 
    string result="";
 
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
 
        if(count[x]==currentRound-1) distinct++;
        count[x]++;
 
        if(distinct==n){
            result.pb('1');
            currentRound++;
            distinct=0;
 
            for(int j=1;j<=n;j++){
                if(count[j]>=currentRound) distinct++;
            }
        }
        else result.pb('0');
    }
 
    cout<<result<<"
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