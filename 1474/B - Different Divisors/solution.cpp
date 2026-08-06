/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ff first
#define ss second
#define pb push_back
const ll MOD = 1e9 + 7;
 
vector<ll> primes;
void primeNumbers(){
    for(ll i=2;i<=100000;i++){
        bool isPrime=true;
        for(ll j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime) primes.pb(i);
    }
}
void solve()
{
    ll d;
    cin>>d;
    ll p=*lower_bound(primes.begin(),primes.end(),1+d);
    ll q=*lower_bound(primes.begin(),primes.end(),p+d);
 
    ll ans=min(1ll*p*p*p,1ll*p*q);
    cout<<ans<<"
";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    primeNumbers();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}