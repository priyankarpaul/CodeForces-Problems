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
 
ll digit(ll n){
    ll sum=0;
    while(n!=0){
        ll remainder=n%10;
        sum=sum*10+remainder;
        n/=10;
    }
    return sum;
}
 
void solve() {
   ll n;cin>>n;
   ll m;cin>>m;
   ll count[m][6];
   ll totalScore=0;
   vector<ll> arr;
   memset(count,0,sizeof(count));
   string s;
   while(n--){
    cin>>s;
       for(int i=0;i<m;i++){
          if(s[i]=='A') count[i][0]++;
          if(s[i]=='B') count[i][1]++;
          if(s[i]=='C') count[i][2]++;
          if(s[i]=='D') count[i][3]++;
          if(s[i]=='E') count[i][4]++;
       }
   }
   for(int i=0;i<m;i++){
       ll x;cin>>x;
       arr.pb(x);
   }
   for(int i=0;i<m;i++){
       ll maxi=0;
       for(int j=0;j<5;j++){
          if(count[i][j]>maxi) {
            maxi=count[i][j];
           }
       }
        totalScore+=(maxi*arr[i]);
   }
   cout<<totalScore<<"
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