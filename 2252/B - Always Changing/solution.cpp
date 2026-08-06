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
    string s;
    cin>>s;
 
    ll countOne=0;
    ll countZero=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') countZero++;
        else countOne++;
    }
 
    ll roundOne=0;
    ll roundZero=0;
    ll i=0;
    while(i<n){
        ll j=i;
        while(j<n&&s[j]==s[i]){
            j++;
        }
        if(s[i]=='0') roundZero++;
        else roundOne++;
        i=j;
    }
 
    ll totalRound=roundOne+roundZero;
    ll x=countZero-roundZero;
    ll y=countOne-roundOne;
    ll differ=abs(x-y);
    ll ex=max(0ll,differ-1);
    ll ans=(n-totalRound)+ex;
    if(abs(countZero-countOne)>2) cout<<"-1
";
    else cout<<ans<<"
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