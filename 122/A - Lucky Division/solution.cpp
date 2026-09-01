/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    ll n;cin>>n;
    if(n%4==0||n%7==0||n%47==0||n%74==0||n%444==0||n%447==0||
        n%474==0||n%747==0||n%744==0||n%777==0||n%477==0){
            cout<<"YES
";
            return;
        }
        else cout<<"NO
";
    
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}