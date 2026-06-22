/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
ll sumofDigits(const string& s){
   ll sum=0;
   for(auto c:s){
    sum+=c-'0';
   }
   return sum;
}
 
void solve() {
    
    string n;
    cin>>n;
 
    ll count=0;
    
    if(n.size()==1){
        cout<<0<<"
";
        return;
    }
 
    ll ans=sumofDigits(n);
    count++;
 
    while(ans>=10){
        string x=to_string(ans);
        ans=sumofDigits(x);
        count++;
    }
 
    cout<<count<<"
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