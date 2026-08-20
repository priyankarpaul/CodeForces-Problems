/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve(){
    
    ll n,k;
    double l,v1,v2;
    cin>>n>>l>>v1>>v2>>k;
    ll g=(n+k-1)/k;
 
    double x=(l*(v1+v2))/((2*g-1)*v1+v2); 
    double totalTime=(l-x)/v1+x/v2;
    cout<<fixed<<setprecision(10)<<totalTime<<"
";
    
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}