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
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    ll mini=1e9;
    ll tt=0;
    for(int t=1;t<=100;t++){
        ll current=0;
        for(int i=0;i<n;i++){
            if(abs(arr[i]-t)>1){
                current+=abs(arr[i]-t)-1;
            }
        }
        if(current<mini){
            mini=current;
            tt=t;
        }
    }
    cout<<tt<<" "<<mini<<"
";
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}