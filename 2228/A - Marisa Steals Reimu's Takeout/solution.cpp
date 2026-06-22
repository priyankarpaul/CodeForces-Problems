/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
   
   ll n;
   cin>>n;
 
   ll zeroCount=0;
   ll oneCount=0;
   ll twoCount=0;
 
   for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x==1) oneCount++;
    if(x==2) twoCount++;
    if(x==0) zeroCount++;
   }
 
   if(twoCount>=oneCount){
    cout<<oneCount+zeroCount+(twoCount-oneCount)/3<<"
";
   }
   else{
    cout<<twoCount+(oneCount-twoCount)/3+zeroCount<<"
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}