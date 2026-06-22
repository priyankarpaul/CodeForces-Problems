/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {  
     
    ll n,k;
    cin>>n>>k;
 
    string s;cin>>s;
    vector<ll> freq(26,0);
    for(auto x:s){
        freq[x-'A']++;
    }
    ll mini=freq[0];
    for(int i=0;i<k;i++){
       mini=min(mini,freq[i]);
    }
    cout<<mini*k<<"
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