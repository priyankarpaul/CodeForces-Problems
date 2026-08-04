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
 
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
 
    vector<ll> s1Even,s1Odd;
    vector<ll> s2Even,s2Odd;
    ll totalOperations=0;
 
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(s1[i]=='1') s1Even.pb(i/2);
            if(s2[i]=='1') s2Even.pb(i/2);
        }
        else{
            if(s1[i]=='1') s1Odd.pb(i/2);
            if(s2[i]=='1') s2Odd.pb(i/2);
        }
    }
    
    if(s1Even.size()!=s2Even.size()||s1Odd.size()!=s2Odd.size()){
        cout<<-1<<"
";
        return;
    }
    
    for(ll i=0;i<s1Odd.size();i++) totalOperations+=abs(s1Odd[i]-s2Odd[i]);
    for(ll i=0;i<s1Even.size();i++) totalOperations+=abs(s1Even[i]-s2Even[i]);
 
    cout<<totalOperations<<"
";
 
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