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
 
bool check(ll h,vector<ll>& arr,ll x){
      ll sum=0;
      for(auto x:arr){
        sum+=max(0LL,(h-x));
      }
      return (sum<=x);
}
 
 
void solve() {
    
    ll n;
    cin>>n;
    ll x;cin>>x;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
     
    ll low=1;
    ll high=1e12;
    ll ans=-1;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(mid,arr,x)){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    cout<<ans<<"
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