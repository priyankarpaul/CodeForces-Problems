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
 
  string s;
  cin>>s;
 
  ll n;
  cin>>n;
 
  if((s=="front"&&n==1)||(s=="back"&&n==2)) cout<<"L
";
  else cout<<"R
";
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
 //#ifndef ONLINE_JUDGE
     freopen("input.txt",  "r",  stdin);
     freopen("output.txt", "w", stdout);
 //#endif
 
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}