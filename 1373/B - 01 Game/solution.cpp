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
 
void solve() {
    string s;
    cin>>s;
    ll oneCount=0;
    ll zeroCount=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') zeroCount++;
        else oneCount++;
    }
if(min(zeroCount,oneCount)%2==0) cout<<"NET
";
else cout<<"DA
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}