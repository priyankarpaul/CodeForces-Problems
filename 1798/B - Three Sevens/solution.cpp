/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
bool prime(ll sum){
    if(sum<2) return false;
    if(sum==3||sum==2) return true;
    if(sum%2==0||sum%3==0) return false;
    for(ll i=5;i*i<=sum;i+=6){
       if(sum%i==0||sum%(i+2)==0) return false;
    }
   return true;
}
 
void solve() {
    
    ll m;
    cin>>m;
    vector<vector<ll>> days(m);
    for(int i=0;i<m;i++){
        ll n;
        cin>>n;
        days[i].resize(n);
        for(int j=0;j<n;j++){
            cin>>days[i][j];
        }
    }
 
    vector<ll> winners(m);
    set<ll> seen;
    bool possible=true;
 
    for(int i=m-1;i>=0;i--){
        ll winner=-1;
        for(auto x:days[i]){
            if(seen.find(x)==seen.end()){
                winner=x;
            }
        }
        if(winner==-1){
            possible=false;
            break;
        }
        winners[i]=winner;
        for(auto x:days[i]){
            seen.insert(x);
        }
    }
 
    if(!possible) cout<<-1<<"
";
    else{
        for(int i=0;i<m;i++){
            cout<<winners[i]<<" ";
        }
        cout<<"
";
    }
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}