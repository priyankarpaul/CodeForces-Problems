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
 
bool simulate(const string& s,ll k){
    if(s[0]=='0') return false;
    
    set<ll> current;
    current.insert(0);
    
    for(char c:s){
      set<ll> next;
       for(auto v:current){
        for(int i=-k;i<=k;i++){
            if(i==0) continue;
            ll nv=v+i;
            if(c=='+'&&nv>0) next.insert(nv);
            else if(c=='-' && nv<0) next.insert(nv);
            else if(c=='0'&&nv==0) next.insert(nv);  
        }
    }
      if(next.empty()) return false;
        current.clear();
        for(auto v:next){
          if(abs(v)<=2*k+2){
            current.insert(v);
          }
        }
    }
    return !current.empty();
}
 
void solve() {
    
    ll n;
    cin>>n;
    vector<ll> arr(n);
    map<ll,ll> counts;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        counts[arr[i]]++;
    }
 
    sort(arr.begin(),arr.end());
    ll v1=arr[0];
    ll v2=arr[1];
    ll v3=arr[2];
 
    ll ans=0;
 
    if(v1==v2&&v2==v3){
       ll c=counts[v1];
        ans=c*(c-1)*(c-2)/6;
    } 
    else if(v1==v2&&v2<v3){
        ll c=counts[v3];
        ans=c;
    } 
    else if(v1<v2&&v2==v3){
        ll c=counts[v3];
        ans=c*(c-1)/2;
    } 
    else{
        ll c=counts[v3];
        ans=c;
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