/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
 
  ll q,d;
  cin>>q>>d;
 
  while(q--){
    ll a;
    cin>>a;
 
    if(a>=10*d){
        cout<<"YES
";
    }
    else{
        bool poosible=false;
        while(a>0){
            if(a%d==0){
                poosible=true;
                break;
            }
            a-=10;
        }
        if(poosible){
            cout<<"YES
";
        }
        else cout<<"NO
";
    }
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