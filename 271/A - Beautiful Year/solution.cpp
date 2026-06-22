/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
int gcd(ll a,ll b ){
    if (b==0){
        return a;
    }
    else{
        return gcd(a,a%b);
    }
}
void solve() {  
    
    ll y;
    cin >> y;
    while (true){
        y+=1;
        ll a=y/1000;
        ll b=y/100%10;
        ll c=y/10%10;
        ll d=y%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
            break;
        }
    }
    cout<<y<<"
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