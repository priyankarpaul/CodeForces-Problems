/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long int
#define ff              first
#define ss              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "
"
#define double          double
 
const ll MOD = 1e9 + 7;
 
void solve() {
  string s;
  cin>>s;
  if(s.size()==1){
    cout<<s[0]<<"
";
    return;
  }
  string element,ex;
  for(int i=0;i<s.size();i++){
    if(s[i]=='+') ex.pb('+');
    if(s[i]!='+') element.pb(s[i]);
  }
 
  sort(element.begin(),element.end());
  string ans;
  for(int i=0;i<element.size();i++){
    ans.pb(element[i]);
    if(i!=element.size()-1) ans.pb('+');
  }
 
  cout<<ans<<"
";
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}