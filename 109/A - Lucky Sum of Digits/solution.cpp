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
 
    ll sevenCount=n/7;
 
    for(int i=sevenCount;i>=0;i--){
        ll r=n-(7*i);
        if(r%4==0){
            ll fours=r/4;
            cout<<string(fours,'4')<<string(i,'7')<<"
";
            return;
        }
    }
    cout<<-1<<"
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