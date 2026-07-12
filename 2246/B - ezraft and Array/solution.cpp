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
 
    if(n==1){
        cout<<1<<"
";
        return;
    }
    if(n==2){
        cout<<-1<<"
";
        return;
    }
 
    vector<ll> ans={1,2,3};
 
    ll currentSum=6; 
    while(ans.size()<n){
        ans.pb(currentSum);
       currentSum*=2; 
    }
 
    for(ll i=0;i<n;i++) {
        cout<<ans[i]<<(i==n-1?"":" ");
    }
    cout<<"
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