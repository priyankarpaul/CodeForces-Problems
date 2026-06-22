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
 
  ll k;cin>>k;
 
  ll count=0;
  ll current=19;
 
  while(true){
    if(digitSum(current)==10){
       count++;
       if(count==k){
        cout<<current<<"
";
        return;
       }
    }
    current+=9;
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