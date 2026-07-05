/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
    string s;
    cin>>s;
 
    ll currentSum=0;
    vector<ll> red;
 
    for(ll i=0;i<s.size();i++){
        ll digit=s[i]-'0';
        currentSum+=digit;
        if(i==0){
            red.pb(digit-1);
        }
        else{
            red.pb(digit);
        }
    }
 
    if(currentSum<=9){
        cout<<0<<"
";
        return;
    }
 
    sort(red.rbegin(),red.rend());
    ll target=currentSum-9;
    ll totalRed=0;
    ll totalMoves=0;
 
    for(auto x:red){
        if(totalRed>=target){
            break;
        }
        totalRed+=x;
        totalMoves++;
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