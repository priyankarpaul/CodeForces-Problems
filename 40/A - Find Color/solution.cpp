/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
   
    ll x,y;
    cin>>x>>y;
 
    double d=sqrt((x*x)+(y*y));
     
    ll d2=floor(d);
 
    if(d==d2){
        cout<<"black
";
    }
    else{
        ll q;
        if(x>0&&y>0) q=1;
        else if(x<0&&y>0) q=2;
        else if(x<0&&y<0) q=3;
 
        if(q==1||q==3){
            if(d2%2!=0){
              cout<<"white
";
            }
            else{
                cout<<"black
";
            }
        }
        else{
            if(d2%2==0){
                cout<<"white
";
            }
            else{
                cout<<"black
";
            }
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
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}