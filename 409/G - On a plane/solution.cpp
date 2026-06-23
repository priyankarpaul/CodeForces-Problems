/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
ll digitSum(ll x){
    ll sum=0;
    while(x){
        ll digit=x%10;
        sum+=digit;
        x/=10;
    }
    return sum;
}
 
 
void solve() {
 
  ll n;
  cin>>n;
 
  long double sumY=0.0;
  long double sumX=0.0;
 
  for(int i=0;i<n;i++){
    long double xi,yi;
    cin>>xi>>yi;
    sumY+=yi;
    sumX+=xi;
  }
  long double ans=(sumY/n)+5.0;
  cout<<fixed<<setprecision(3)<<ans<<"
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