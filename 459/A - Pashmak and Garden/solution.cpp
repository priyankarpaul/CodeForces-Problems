/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
void solve() {
    
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
 
    ll dx=x2-x1;
    ll dy=y2-y1;
 
    if(dx==0){
        ll side=abs(dy);
        cout<<x1+side<<" "<<y1<<" "<<x2+side<<" "<<y2<<"
";
    }
    else if(dy==0){
        ll side=abs(dx);
        cout<<x1<<" "<<y1+side<<" "<<x2<<" "<<y2+side<<"
";
    }
    else if(abs(dx)==abs(dy)){
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<"
";
    }
    else{
        cout<<-1<<"
";
    }
 
}   
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}