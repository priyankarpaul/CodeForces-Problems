/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
   ll n;
   cin>>n;
   string s;
   cin>>s;
   vector<ll> t,m;
 
   for(int i=0;i<n;i++){
     if(s[i]=='T') t.pb(i);
     else m.pb(i);
   } 
 
 
 
   // for(auto x:t) cout<<x<<" ";
   // cout<<"
";
   // for(auto x:m) cout<<x<<" ";
   // cout<<"
";
 
 
 
   if(t.size()!=2*m.size()){
    cout<<"NO
";
    return;
   }
   for(ll i=0;i<m.size();i++){
    if(m[i]<t[i]||m[i]>t[i+m.size()]){
        cout<<"NO
";
        return;
    }
   }
   cout<<"YES
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