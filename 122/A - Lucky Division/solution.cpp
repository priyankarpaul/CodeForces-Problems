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
   
   ll n;
   cin>>n;
   if(n%4==0||n%7==0||n%44==0||n%77==0||n%47==0||n%74==0||
    n%444==0||n%447==0||n%474==0||n%744==0||n%477==0||n%747==0||
    n%774==0||n%777==0){
    cout<<"YES
";
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