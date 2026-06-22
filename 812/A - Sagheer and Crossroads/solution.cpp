/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
   
   static bool c[4],ped[4];
 
   for(int i=0;i<4;i++){
    ll l,s,r,p;
    cin>>l>>s>>r>>p;
    if(l||s||r){
        c[i]=1;
    }
    c[(i+3)%4]|=l;
    c[(i+2)%4]|=s;
    c[(i+1)%4]|=r;
    ped[i]=p;
   }
   for(int i=0;i<4;i++) {
       if(ped[i] && c[i]) {
          cout<<"YES
";
          return;
        }
    }
    cout<<"NO
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