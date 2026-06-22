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
  ll n=s.size();
  ll danil=0,olya=0,slava=0,ann=0,nikita=0;
 
  for(int i=0;i<n;i++){
     if(s.substr(i,5)=="Danil") danil++;
     if(s.substr(i,5)=="Slava") slava++;
     if(s.substr(i,4)=="Olya") olya++;
     if(s.substr(i,3)=="Ann") ann++;
     if(s.substr(i,6)=="Nikita") nikita++;
  }
 
  if((danil+nikita+olya+slava+ann)==1) cout<<"YES
";
  else cout<<"NO
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