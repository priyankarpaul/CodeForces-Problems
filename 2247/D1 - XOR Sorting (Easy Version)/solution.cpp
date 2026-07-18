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
    ll q;
    cin>>q;
 
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    if(is_sorted(arr.begin(),arr.end())){
        cout<<0<<"
";
        return;
    }
 
    for(int i=0;;i++){
        ll mx=-1;
        bool good=1;
        for(int j=0;j*(1<<(i+1))<n;j++){
            ll cmx=-1;
            for(int k=0;j*(1<<(i+1))+k<n&&k<(1<<(i+1));k++){
                ll current=arr[j*(1<<(i+1))+k];
                good&=(mx<=current);
                cmx=max(cmx,current);
            }
            mx=max(mx,cmx);
        }
        if(good){
            cout<<(1<<i)<<"
";
            return;
        }
    }
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