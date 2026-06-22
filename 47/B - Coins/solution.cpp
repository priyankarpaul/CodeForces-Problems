/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
const ll maxX=1e6;
 
 
void solve() {
   
   string s;
   string low="";
   string high="";
 
   for(int i=0;i<3;i++){
      if(cin>>s){
      if(s[1]=='>'){
       high.pb(s[0]);
       low.pb(s[2]);
       }
      if(s[1]=='<') {
        high.pb(s[2]);
        low.pb(s[0]);
      }
    }
   }
 
   ll a=0,b=0,c=0;
 
   for(int i=0;i<3;i++){
 
    if(high[i]=='A'){
     a++;
    }
    if(high[i]=='B'){
        b++;
    }
    if(high[i]=='C'){
      c++;
    }
   }
   
 
   for(int i=0;i<3;i++){
 
    if(low[i]=='A'){
       a--;
    }
    if(low[i]=='B'){
        b--;
    }
    if(low[i]=='C'){
        c--;
    }
}
 
     // cout<<a<<" "<<b<<" "<<c<<"
";
 
    vector<pair<int,char>> v;
      v.pb({a,'A'});
      v.pb({b,'B'});
      v.pb({c,'C'});
 
     sort(v.begin(), v.end());
 
     if(v[0].first==v[1].first||v[1].first==v[2].first) cout<<"Impossible
";
     else {
         for(auto &p:v)
             cout<<p.second;
      cout<<'
';
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