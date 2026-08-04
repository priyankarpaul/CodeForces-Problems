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
 
    string s1,s2;
    cin>>s1>>s2;
 
    ll s1EvenOne=0,s1OddOne=0;
    ll s2EvenOne=0,s2OddOne=0;
 
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(s1[i]=='1') s1EvenOne++;
            if(s2[i]=='1') s2EvenOne++;
        }
        else{
            if(s1[i]=='1') s1OddOne++;
            if(s2[i]=='1') s2OddOne++;
        }
    }
    if(s1OddOne==s2OddOne&&s1EvenOne==s2EvenOne) cout<<"YES
";
    else cout<<"NO
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