/*Author SungJinWoo*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
    ll n;
    cin>>n;
    vector<ll> arr(n+1),position(2*n+1,0);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        position[arr[i]]=i;
    }
    ll count=0;
    for(int i=1;i<=2*n;i++){
        if(position[i]==0) {
            continue;
        }
        for(int j=1;i*j<=2*n;j++){
            if(position[j]==0) {
                continue;
            }
            if(position[i]<position[j]&&position[i]+position[j]==i*j){
                count++;
            }
        }
    }
    cout<<count<<"
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