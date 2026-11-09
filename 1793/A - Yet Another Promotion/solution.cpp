/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
ll digit(ll n){
    ll sum=0;
    while(n>0){
        ll digit=n%10;
        sum+=digit;
        n/=10;
    }
    return sum;
}
 
void solve(){
    
    ll a,b,n,m;
    cin>>a>>b>>n>>m;
    
    ll batches=n/(m+1);
    ll remainder=n%(m+1);
    
    if(m*a<(m+1)*b){
        ll cost=batches*(m*a);
        cost+=min(remainder*min(a,b),m*a);
        cout<<cost<<"
";
    } 
    else cout<<n*b<<"
";
    
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}