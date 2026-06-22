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
    vector<ll> arr(n+1);
 
    for(int i=1;i<=n;i++) {
        cin>>arr[i];
    }
 
    vector<ll> prefixBefore(n+1),prefixAfter(n+1);
 
    for(int i=1;i<=n;i++){
     prefixBefore[i]=prefixBefore[i-1]+arr[i];
    }
 
    sort(arr.begin(),arr.end());
 
    for(int i=1;i<=n;i++){
        prefixAfter[i]=prefixAfter[i-1]+arr[i];
    } 
    
    ll q;cin>>q;
    while(q--){
        ll type,l,r;
        cin>>type>>l>>r;
        if(type==1){
            cout<<prefixBefore[r]-prefixBefore[l-1]<<"
";
        }
        if(type==2){
            cout<<prefixAfter[r]-prefixAfter[l-1]<<"
";
        }
    }
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