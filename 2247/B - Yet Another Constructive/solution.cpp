/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
    
    ll n,k,m;
    cin>>n>>k>>m;
 
    if(k>m){
        cout<<"NO
";
        return;
    }
    cout<<"YES
";
    for(int i=0;i<n;i++){
        ll rem=i%k;
        if(rem<k-1) cout<<1<<" ";
        else cout<<(m-k+1)<<" ";
    }
    cout<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}