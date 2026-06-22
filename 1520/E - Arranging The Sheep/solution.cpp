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
    string s;
    cin>>s;
 
    vector<ll> position;
    for(int i=0;i<n;i++){
        if(s[i]=='*'){
            position.pb(i);
        }
    }
 
    ll k=position.size();
 
    if(k<=1){
        cout<<0<<"
";
        return;
    }
   
    ll medianIdx=k/2;
    ll targetStart=position[medianIdx]-medianIdx;
 
    ll totalMoves=0;
    for(int i=0;i<k;i++){
        totalMoves+=abs(position[i]-(targetStart+i));
    }
    
    cout<<totalMoves<<"
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