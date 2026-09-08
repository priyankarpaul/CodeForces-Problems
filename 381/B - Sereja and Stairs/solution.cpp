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
 
ll combination(ll n,ll k){
    if(k<0||k>n) return 0;
    if(k==0||k==n) return 1;
    if(k>n/2)k=n-k;
    ll res=1;
    for(ll i=1;i<=k;i++){
        res=res*(n-i+1)/i;
    }
    return res;
}
 
void solve() {
    
    ll m;
    cin>>m;
 
    map<ll,ll> counts;
    ll maxVal=0;
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        counts[x]++;
        maxVal=max(maxVal,x);
    }
 
    vector<ll> left,right;
 
    for (auto const&[val,count]:counts){
        if(val==maxVal) left.pb(val);
        else{
            if(count>=1){
                left.pb(val);
            }
            if(count>=2){
                right.pb(val);
            }
        }
    }
    reverse(right.begin(), right.end());
    cout<<left.size()+right.size()<<"
";
 
    for(auto x:left) cout<<x<<" ";
    for(auto x:right) cout<<x<<" ";
 
    cout << "
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