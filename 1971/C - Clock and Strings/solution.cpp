/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {  
    
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
 
    string s;
    for(int i=1;i<=12;i++){
        if(i==a||i==b) s+="b";
        if(i==c||i==d) s+="a";
    }
    cout<<(s=="abab"||s=="baba"?"YES
":"NO
");
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