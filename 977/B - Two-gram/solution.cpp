/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
bool digit(ll n){
    if(n%10!=0){
        return true;
    }
    else return false;
}
 
ll lcmm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}
 
void solve() {
    
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll maxi=0;
    string res;
    for(int i=0;i<n-1;i++){
        ll count=0;
        for(int j=0;j<n-1;j++)
            if(s[j]==s[i]&&s[i+1]==s[j+1]) count++;
        if(maxi<count){
            maxi=count;
            res=string(1,s[i])+string(1,s[i+1]);
        } 
    }
    cout<<res<<"
";
 
    
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}