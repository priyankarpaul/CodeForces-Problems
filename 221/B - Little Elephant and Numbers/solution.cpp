/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
bool isDigit(ll d,vector<bool>& xDigit){
     while(d>0){
        ll digit=d%10;
        if(xDigit[digit]){
            return true;
        }
        d/=10;
     }
     return false;
}
 
void solve(){
    
    ll x;
    cin>>x;
    ll copyOfX=x;
 
    vector<bool> xDigit(10,false);
    while(copyOfX>0){
         xDigit[copyOfX%10]=true;
         copyOfX/=10;
    }
    
    ll count=0;
     
     set<ll> divisors;
     for(int i=1;i*i<=x;i++){
        if(x%i==0){
            divisors.insert(i);
            divisors.insert(x/i);
        }
 
     }
 
     for(auto d:divisors){
        if(isDigit(d,xDigit)){
            count++;
        }
     }
 
    cout<<count<<"
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