/*Author SungJinWoo18*/
 
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
    vector<ll> arr(n),temp(1024,0);
    for(int i=0;i<n;i++){
     cin>>arr[i];
     temp[arr[i]]++;
    }
    ll ans=-1;
    for(int k=1;k<=1023;k++){
        vector<int> freq(1024,0);
        for(int i=0;i<n;i++){
            freq[arr[i]^k]++;
        }
        bool flag=true;
        for(int i=0;i<1024;i++){
            if(temp[i]!=freq[i]){
               flag=false;
               break;
            }
        }
        if(flag){
            ans=k;
            break;
        }
    }
    cout<<ans<<"
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