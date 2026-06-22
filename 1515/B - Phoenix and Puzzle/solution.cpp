/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
bool isSqrt(ll n){
    ll x=sqrt(n);
    return x*x==n;
}
 
void solve() {
   
   ll n;
   cin>>n;
   if(n%2==0&&isSqrt(n/2)){
    cout<<"YES
";
   }
   else if(n%4==0&&isSqrt(n/4)){
    cout<<"YES
";
   }
   else{
    cout<<"NO
";
   }
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