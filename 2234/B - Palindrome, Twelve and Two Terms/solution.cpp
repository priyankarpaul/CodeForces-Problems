/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
const ll maxX=1e6;
 
bool sol(ll n,ll a,ll b,ll c,ll d){
    if(abs(b-c)>1) return false;
    else if(abs(b-c)==1) return true;
    else if(b!=0) return true;
    else if(a==0||d==0) return true;
    else return false;
}
 
void solve() {
 
    ll n;
    cin>>n;
    if(n==10){
        cout<<-1<<"
";
        return;
    }
    if(n%12==10) cout<<22<<" "<<n-22<<"
";
    else cout<<n%12<<" "<<n-(n%12)<<"
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