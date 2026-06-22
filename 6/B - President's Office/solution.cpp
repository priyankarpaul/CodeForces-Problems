/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
set<char> adj;
 
void solve() {
   
    ll n,m;
    cin>>n>>m;
    char c;
    cin>>c;
    string s[n];
 
    for(int i=0;i<n;i++) cin>>s[i];
 
    
 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]==c){
                if(i!=0&&s[i-1][j]!=c) adj.insert(s[i-1][j]);
                if(i!=n-1&&s[i+1][j]!=c) adj.insert(s[i+1][j]);
                if(j!=0&&s[i][j-1]!=c) adj.insert(s[i][j-1]);
                if(j!=m-1&&s[i][j+1]!=c) adj.insert(s[i][j+1]);
            }
        }
    }
    
     ll count=0;
 
     if(adj.find('.')!=adj.end()) count--;
     cout<<adj.size()+count<<"
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