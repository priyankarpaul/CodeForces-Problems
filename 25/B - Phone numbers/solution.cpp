/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
set<char> adj;
 
void solve() {
    ll n;
    cin>>n;
 
    string s;
    cin>>s;
 
    string str;
 
    if(n%2==0){
        for(int i=0;i<n;i+=2){
           str.pb(s[i]);
           str.pb(s[i+1]);
           if(i!=n-2){
            str.pb('-');
           }
        }
    }
    else if(n%2!=0){
        for(int i=0;i<n-3;i+=2){
            str.pb(s[i]);
            str.pb(s[i+1]);
            if(i!=n-3){
            str.pb('-');
           }
        }
        str.pb(s[n-3]);
        str.pb(s[n-2]);
        str.pb(s[n-1]);
    }
 
    cout<<str<<"
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