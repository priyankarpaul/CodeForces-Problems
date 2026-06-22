/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
bool tri(ll a,ll b,ll c){
    return((a+b>c)&&(a+c>b)&&(b+c>a));
}
 
bool seg(ll a,ll b,ll c){
    return ((a==b+c)||(b==a+c)||(c==a+b));
}
 
void solve() {
   
   ll a,b,c,d;
   cin>>a>>b>>c>>d;
 
   bool general=false;
   bool nonGeneral=false;
 
   general=general||(tri(a,b,c));
   general=general||(tri(a,b,d));
   general=general||(tri(a,c,d));
   general=general||(tri(b,c,d));
   
   nonGeneral=nonGeneral||(seg(a,b,c));
   nonGeneral=nonGeneral||(seg(a,b,d));
   nonGeneral=nonGeneral||(seg(a,c,d));
   nonGeneral=nonGeneral||(seg(b,c,d));
 
   if(general) cout<<"TRIANGLE
";
   else if(nonGeneral) cout<<"SEGMENT
";
   else cout<<"IMPOSSIBLE
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