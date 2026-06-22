/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
vector<ll> sieve(ll limit){
    vector<bool> isPrime(limit+1,true);
    isPrime[0]=isPrime[1]=false;
    for(ll i=2;i*i<=limit;i++){
        if(isPrime[i]){
            for(ll j=i*i;j<=limit;j+=i){
                isPrime[j]=false;
            }
        }
    }
    vector<ll> primes;
    for(ll i=2;i<=limit;i++){
        if(isPrime[i]) primes.pb(i);
    }
    return primes;
}
 
vector<ll> primes=sieve(200000);
                    
void solve() {
 
    ll n;
    cin>>n;
    cout<<primes[0];
    for(int i=1;i<n;i++){
        cout<<" "<<(ll)primes[i-1]*primes[i];
    }
    cout<<"
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