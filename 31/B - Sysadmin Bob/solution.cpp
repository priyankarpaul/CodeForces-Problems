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
    
    string s;
    cin>>s;
 
    vector<ll> indices;
    for(int i=0;i<s.size();i++){
        if(s[i]=='@') indices.pb(i);
    }
 
    if(indices.empty()||indices.front()==0||indices.back()==s.size()-1){
        cout<<"No solution
";
        return;
    }
    
    for(size_t i=0;i<indices.size()-1;i++){
        if(indices[i+1]-indices[i]<3){
            cout<<"No solution
";
            return;
        }
    }
 
    ll lastIndex=0;
    for(size_t i=0;i<indices.size()-1;i++){
        ll split=indices[i]+2;
        cout<<s.substr(lastIndex,split-lastIndex)<<",";
        lastIndex=split;
    }
 
    cout<<s.substr(lastIndex)<<"
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