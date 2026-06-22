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
    
    string s;
    cin>>s;
    ll n=s.size();
    ll count=0;
    if(s[0]=='4'){
        cout<<"NO
";
        return;
    }
    if(s.find("444")!=s.npos){
      cout<<"NO
";
      return;
    }
    for(int i=0;i<n;i++){
        if(s[i]!='1'&&s[i]!='4'){
            cout<<"NO
";
            return;
        }
    }
    cout<<"YES
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