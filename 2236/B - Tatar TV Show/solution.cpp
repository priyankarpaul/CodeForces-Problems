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
   ll k;
   cin>>n>>k;
   string s;
   cin>>s;
 
   vector<ll> oneCount(k,0);
 
   for(int i=0;i<k;i++){
    for(int j=i;j<n;j+=k){
        if(s[j]=='1') {
            oneCount[i]++;
        }
    }
   }
 
   bool flag=false;
   for(int i=0;i<k;i++){
    if(oneCount[i]%2!=0){
        flag=true;
        break;
    }
   }
 
   if(flag) cout<<"NO
";
   else cout<<"YES
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