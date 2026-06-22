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
    ll count=0;
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    if((n-count)%2==0) cout<<"CHAT WITH HER!
";
    else cout<<"IGNORE HIM!
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