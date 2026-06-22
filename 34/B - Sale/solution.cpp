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
        ll n,m;
        cin>>n>>m;
        vector<ll> arr(n);
        vector<ll> negValues;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(arr[i]<0) negValues.pb(arr[i]);
        }
        ll size=negValues.size();
        ll sum=0;
        sort(negValues.begin(),negValues.end());
 
        //for(auto x:negValues) cout<<x<<" ";
 
        for(int i=0;i<size;i++){
            if(m!=0) {
                sum+=negValues[i];
                m--;
            }
        }
 
        cout<<abs(sum)<<"
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