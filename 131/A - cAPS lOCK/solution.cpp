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
#define double         long double
 
const ll MOD = 1e9 + 7;
 
 
void solve() {
   string s;
   cin>>s;
   ll n=s.size();
   ll flag=0;
   if(s[0]>='a'&&s[0]<='z'){
    flag=1;
   }
 
   ll count=0;
 
   for(int i=0;i<n;i++){
      if(s[i]>='A'&&s[i]<='Z') count++;
   }
   
   string s1=s;
   s1[0]=toupper(s1[0]);
   for(int i=1;i<n;i++){
      s1[i]=tolower(s1[i]);
   }
 
   string s2=s;
   for(int i=0;i<n;i++) {
    s2[i]=tolower(s2[i]);
   }
 
   
 
   if((flag==1&&count==n-1)) cout<<s1<<"
";
   else if(count==n) cout<<s2<<"
";
   else cout<<s<<"
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