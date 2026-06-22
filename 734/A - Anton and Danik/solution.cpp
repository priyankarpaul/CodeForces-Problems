/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
bool digit(ll n){
    if(n%10!=0){
        return true;
    }
    else return false;
}
 
ll lcmm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}
 
void solve() {
ll n;cin>>n;
   string s;
   cin>>s;
   ll d=0;
   ll a=0;
   for(int i=0;i<n;i++){
      if(s[i]=='A') a++;
      else d++;
   }
   if(a>d) cout<<"Anton
";
   else if(a<d)cout<<"Danik
";
   else cout<<"Friendship
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}