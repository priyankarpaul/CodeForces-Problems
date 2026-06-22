/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
bool digit(ll n){
    if(n%10!=0){
        return true;
    }
    else return false;
}
 
ll lcmm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}
 
void solve() {
    
    ll n;;ll t;cin>>n>>t;
    if(t==10){
        if(n==1){
            cout<<"-1
";
            return;
        }
        if(n>1){
           for(int i=1;i<n;i++){
              cout<<1;
            }
            cout<<0<<"
";
        }
    }
    
    else if(t<10){
        for(int i=1;i<=n;i++){
            cout<<t;
        }
    }
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