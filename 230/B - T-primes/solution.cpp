/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
bool isImperfect(ll n){
    return (n%2==0)^(n%5==0);
}
 
const int MAXN = 1000000;
vector<bool> isPrime(MAXN + 1, true);
 
void sieve(){
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=MAXN;i++){
        if(isPrime[i]) {
            for(int j=i*i;j<=MAXN;j+=i){
                isPrime[j]=false;
            }
        }
    }
}
 
void solve() {
    sieve();
    ll n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        ll y=sqrt(x);
        if(y*y==x&&isPrime[y]){
            cout<<"YES
";
        }
        else{
            cout<<"NO
";
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