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
    
    string s;
    cin>>s;
 
    ll n=s.size();
    vector<ll> lastPos(26,-1);
    vector<ll> maxiGaps(26,0);
 
    for(int i=0;i<n;i++){
        ll index=s[i]-'a';
        ll current=i-lastPos[index];
        maxiGaps[index]=max(maxiGaps[index],current);
        lastPos[index]=i;
    }
 
    ll ans=n;
    for(int i=0;i<26;i++){
        if(lastPos[i]!=-1){
            ll finalGap=n-lastPos[i];
            maxiGaps[i]=max(maxiGaps[i],finalGap);
 
            ans=min(ans,maxiGaps[i]);
        }
    }
    cout<<ans<<"
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