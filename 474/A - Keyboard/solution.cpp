/*Author SungJinWoo*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
    char ch;
    string s;
    cin>>ch;
    cin>>s;
    string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
    for(auto &x:s){
        ll pos=keyboard.find(x);
        if(ch=='R') x=keyboard[pos-1];
        else x=keyboard[pos+1];
    }
    cout<<s<<"
";  
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}