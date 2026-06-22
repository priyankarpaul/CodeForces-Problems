/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
   
   string s;
   cin>>s;
   ll pref2=0;
   ll suf=0;
   ll ans=0;
   for(auto x:s){
    if(x=='1'||x=='3') suf+=1;
   }
   ans=pref2+suf;
   for(auto x:s){
    if(x=='2') pref2+=1;
    if(x=='1'||x=='3') suf-=1;
    ans=max(ans,pref2+suf);
   }
   cout<<s.size()-ans<<"
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