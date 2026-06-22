/*Author SungJinWoo*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
    string s;
    cin>>s;
    ll n=s.size();
    ll upperCaseCount=0;
    ll lowerCaseCount=0;
    for(int i=0;i<n;i++){
        if(s[i]>='a'&&s[i]<='z') lowerCaseCount++;
        else upperCaseCount++;
    }
    string s1=s;
    string s2=s;
    for(int i=0;i<n;i++){
      s1[i]=tolower(s1[i]);
      s2[i]=toupper(s2[i]);
    }
    if(lowerCaseCount>=upperCaseCount) cout<<s1<<"
";
    else cout<<s2<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}