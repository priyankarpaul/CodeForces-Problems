/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
 
void solve(){
 
    string s;
    cin>>s;
    map<char,ll> mp;
    for(auto x:s) mp[x]++;
    ll maxi=0;
    char element='a';
    for(auto x:mp){
        if(x.ff>=element){
          element=x.ff;
          maxi=x.ss;
        }
    }
 
    for(int i=0;i<maxi;i++){
        cout<<element;
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