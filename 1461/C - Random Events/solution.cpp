/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
void solve() {
    
    ll n,m;
    cin>>n>>m;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    ll k=0;
    for(int i=n;i>=1;i--){
        if(arr[i-1]!=i){
            k=i;
            break;
        }
    }
    
    double failedProb=1.0;
    for(int i=0;i<m;i++){
        ll r;
        double p;
        cin>>r>>p;
        if(r>=k) {
            failedProb*=(1.0-p);
        }
    }
    
    if(k==0) cout<<fixed<<setprecision(6)<<1.0<<"
";
    else cout<<fixed<<setprecision(6)<<(1.0-failedProb)<<"
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