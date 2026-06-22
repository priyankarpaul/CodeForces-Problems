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
    string s;
    cin>>s;
    ll n;
    cin>>n;
 
    string best="";
    bool found=false;
 
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        if(str.rfind(s,0)==0){
            if(!found||str<best){
                best=str;
                found=true;
            }
        }
    }
    if(found){
        cout<<best<<"
";
    }
    else{
        cout<<s<<"
";
    }
    
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