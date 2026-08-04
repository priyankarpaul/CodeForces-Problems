/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
void solve() {
 
    ll n;
    cin>>n;
    string s;
    cin>>s;
 
    ll initialLength=0;
    for(int i=0;i<n;i++){
        if(i==0||s[i]!=s[i-1]){
            initialLength++;
        }
    }
    ll miniLength=initialLength;
    for(int i=1;i<n-1;i++){
        if(s[i]!=s[i-1]&&s[i]!=s[i+1]){
            if(s[i-1]==s[i+1]) miniLength=min(miniLength,initialLength-2);
            else miniLength=min(miniLength,initialLength-1); 
        }
    }
    
    cout<<miniLength<<"
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