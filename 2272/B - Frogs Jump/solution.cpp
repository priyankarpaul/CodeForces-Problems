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
 
    string s1,s2;
    cin>>s1>>s2;
 
    ll s1Count=0,s2Count=0;
 
    for (int i=0;i<n;i++) {
        if(s1[i]=='f') s1Count++;
        if(s2[i]=='f') s2Count++;
    }
 
    ll diff=abs(s1Count-s2Count);
    if(diff== 0){
        cout<<0<<"
";
        return;
    }
 
    string str;
    if(s1Count>s2Count) str=s1;
    else str=s2;
 
    ll pairs=0;
    for (int i=0;i+1<n;i++){
        if (str[i]=='f'&&str[i+1]=='f'){
            pairs++;
            i++;
        }
    }
 
    ll usablePairs=min(pairs,diff/2);
    ll ans=diff-2*usablePairs;
 
    cout<<ans<<"
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