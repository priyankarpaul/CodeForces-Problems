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
 
   ll h=1;
   ll e=1;
   ll LL=2;
   ll o=1;
   ll count=0;
 
   for(int i=0;i<n;i++){
       if(s[i]=='h'&&h==1&&e==1&&LL==2&&o==1){
        h--;
        count++;
       }
       else if(s[i]=='e'&&h<=0&&e==1&&LL==2&&o==1){
        e--;
        count++;
       }
       else if(s[i]=='l'&&h<=0&&e<=0&&LL==2&&o==1){
        LL--;
        count++;
       }
       else if(s[i]=='l'&&h<=0&&e<=0&&LL==1&&o==1){
        LL--;
        count++;
       }
       else if(s[i]=='o'&&h<=0&&e<=0&&LL<=0&&o==1){
        o--;
        count++;
       }
   }
 
   if(count>=5) cout<<"YES
";
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