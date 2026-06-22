/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
  
  string s;
  cin>>s;
 
  string s1=s;
  reverse(s1.begin(),s1.end());
 
  ll n=s.size();
  for(int i=0;i<n;i++){
    if(s[i]!='A'&&s[i]!='H'&&s[i]!='I'&&s[i]!='M'&&s[i]!='O'
        &&s[i]!='T'&&s[i]!='U'&&s[i]!='V'&&s[i]!='W'&&s[i]!='X'&&s[i]!='Y'){
        cout<<"NO
";
        return;
    }
  }  
 
    if(s==s1){
        cout<<"YES
";
        return;
    }
    else cout<<"NO
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