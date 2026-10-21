/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
 
 
void solve(){
    
    ll n;
    cin>>n;
 
    vector<ll> minCost(8,1e9);
    for(int i=0;i<n;i++){
        ll c;
        cin>>c;
        string s;
        cin>>s;
        ll mask=0;
        for(auto x:s){
            if(x=='A') mask|=1;
            if(x=='B') mask|=2;
            if(x=='C') mask|=4;
        }
        minCost[mask]=min(minCost[mask],c);
    }
    
    ll ans=1e9;
    for(int m1=1;m1<8;m1++){
        for(int m2=1;m2<8;m2++){
            for(int m3=1;m3<8;m3++){
                if((m1|m2|m3)==7){
                    ans=min(ans,minCost[m1]+minCost[m2]+minCost[m3]);
                }
            }
        }
    }
 
    for(int m1=1;m1<8;m1++){
        if(m1==7) ans=min(ans,minCost[m1]);
        for(int m2=1;m2<8;m2++){
            if((m1|m2)==7) ans=min(ans,minCost[m1]+minCost[m2]);
        }
    }
 
    if(ans>=1e9) cout<<-1<<"
";
    else cout<<ans<<"
";
    
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
   // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}