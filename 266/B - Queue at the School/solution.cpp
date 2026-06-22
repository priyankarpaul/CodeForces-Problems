/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
int fib(ll n){
    if(n==1||n==0) return n;
    return fib(n-1)+fib(n-2);
}
 
void solve() {
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n==1) {
       cout<<s<<"
";
       return;
    }
    for(int i=0;i<k;i++){
        for(int j=1;j<n;j++){
            if(s[j]=='G'&&s[j-1]=='B'){
                swap(s[j],s[j-1]);
                j++;
            }
        }
    }
    cout<<s<<"
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