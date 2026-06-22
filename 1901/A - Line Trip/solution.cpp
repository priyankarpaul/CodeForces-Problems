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
 
    ll n,x;
    cin>>n>>x;
    vector<ll> arr;
    arr.pb(0);
    for(int i=0;i<n;i++){
        ll p;
        cin>>p;
        arr.pb(p);
     }
    arr.pb(x);
    ll maxi=LLONG_MIN;
    n=arr.size();
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]-arr[i-1]);
    }
    ll tail=max(2*(arr[n-1]-arr[n-2]),maxi);
    ll res=max(maxi,tail);
 
    cout<<res<<"
";
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}