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
   ll s,n;
   cin>>s>>n;
   vector<pair<ll,ll>> arr(n);
   for(int i=0;i<n;i++) cin>>arr[i].ff>>arr[i].ss;
   sort(arr.begin(),arr.end());
   for(int i=0;i<n;i++){
    if(s>arr[i].ff) s+=arr[i].ss;
    else{
        cout<<"NO
";
        return;
    }
   }
   cout<<"YES
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