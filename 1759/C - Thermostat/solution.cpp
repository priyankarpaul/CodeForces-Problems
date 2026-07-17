/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
    ll l,r,x;
    cin>>l>>r>>x;
    ll a,b;
    cin>>a>>b;
 
    if(a==b){
        cout<<0<<"
";
        return;
    }
 
    if(abs(a-b)>=x){
        cout<<1<<"
";
        return;
    }
 
    if(abs(a-r)>=x&&abs(r-b)>=x){
        cout<<2<<"
";
        return;
    }
    if(abs(a-l)>=x&&abs(l-b)>=x){
        cout<<2<<"
";
        return;
    }
 
    if(abs(a-r)>=x&&abs(r-l)>=x&&abs(l-b)>=x){
        cout<<3<<"
";
        return;
    }
    if(abs(a-l)>=x&&abs(l-r)>=x&&abs(r-b)>=x){
        cout<<3<<"
";
        return;
    }
 
    cout << -1 << "
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}