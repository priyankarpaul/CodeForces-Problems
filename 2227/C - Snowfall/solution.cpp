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
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    vector<ll> div6,div3,div2,div1;
    for(int i=0;i<n;i++){
        bool two=(arr[i]%2==0);
        bool three=(arr[i]%3==0);
            if(two&&three)  div6.pb(arr[i]);
            else if(two) div2.pb(arr[i]);
            else if(three) div3.pb(arr[i]);
            else div1.pb(arr[i]);
    }
 
    vector<ll>ans;
    for(auto x:div6) ans.pb(x);
    for(auto x:div2) ans.pb(x);
    for(auto x:div1) ans.pb(x);
    for(auto x:div3) ans.pb(x);
 
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<"
";
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}