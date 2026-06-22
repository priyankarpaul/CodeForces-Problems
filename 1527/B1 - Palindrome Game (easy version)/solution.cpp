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
 
    ll countZer0=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') countZer0++;
    }
 
    if(countZer0==1){
        cout<<"BOB
";
        return;
    }
    if(countZer0%2){
        cout<<"ALICE
";
        return;
    }
    cout<<"BOB
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