/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
 
void solve(){
 
    ll n;
    cin>>n;
    string s;
    cin>>s;
    
    vector<ll> memory;
    vector<bool> printed(n+1,false);
    for(int i=0;i<n;i++){
        if(s[i]=='1') memory.pb(i+1);
        else if(s[i]=='2'){
            if(memory.empty()){
               printed[i+1]=true;
            }
            else{
                printed[memory.back()]=true;
                memory.pop_back();
            }
        }
        else if(s[i]=='3'){
            printed[i+1]=true;
        }
    }
 
    vector<ll> notPrinted;
    for(int i=1;i<=n;i++){
        if(printed[i]==false){
            notPrinted.pb(i);
        }
    }
 
    cout<<notPrinted.size()<<"
";
    for(auto x:notPrinted) cout<<x<<" ";
    cout<<"
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