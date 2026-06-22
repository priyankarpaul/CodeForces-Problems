/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
vector<string> str;
void solve() {
 
   ll n;
   cin>>n;
   ll m;
   cin>>m;
   ll count=0;
   for(int i=1;i<=n+m;i++){
    string s;
    cin>>s;
    str.pb(s);
   }
 
   sort(str.begin(),str.end());
   for(int i=0;i<n+m-1;i++){
    if(str[i]==str[i+1]) count++;
   }
   if(count%2==0){
    if(n-count<=m-count) cout<<"NO
";
    else cout<<"YES
";
   }
   else if(count%2==1){
    if(n-count<=m-count-1) cout<<"NO
";
    else cout<<"YES
"; 
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