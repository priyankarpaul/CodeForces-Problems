/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
void solve() {
    
    ll n,m;
    cin>>n>>m;
 
    unordered_set<ll> existingToys;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        existingToys.insert(x);
    }
 
    vector<ll> boughtToys;
    ll currentToys=1;
 
    while(m>=currentToys){
        if (existingToys.find(currentToys)==existingToys.end()){
            boughtToys.pb(currentToys);
            m-=currentToys;
        }
        currentToys++;
    }
 
    cout<<boughtToys.size()<<"
";
    for(size_t i=0;i<boughtToys.size();i++){
        cout<<boughtToys[i]<<" "; 
    }
    cout<<"
";
 
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