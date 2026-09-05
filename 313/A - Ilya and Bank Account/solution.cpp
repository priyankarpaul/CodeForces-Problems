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
    
    string s;
    cin>>s;
    ll n=s.size(); 
    if(s[0]!='-'){ 
         cout<<s<<"
"; 
         return; 
    } 
    if(s[n-1]>s[n-2]){
        s.pop_back();
        n--;
    } 
    else if(s[n-1]<=s[n-2]){
        char s1=s[n-1];
        s.pop_back();
        n--;
        s.pop_back();
        n--;
        s.pb(s1);
        n++;
    } 
    if(s[n-1]=='0'&&s[n-2]=='-'){
        cout<<0<<"
"; 
        return;
    } 
    cout<<s<<"
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