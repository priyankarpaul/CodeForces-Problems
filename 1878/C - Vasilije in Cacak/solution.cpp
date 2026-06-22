/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
 
    ll n,k,x;
    cin>>n>>k>>x;
 
    ll maxSum=n*(n+1)/2-(n-k)*(n-k+1)/2;
    ll minSum=k*(k+1)/2;
 
    if(x>=minSum&&x<=maxSum){
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