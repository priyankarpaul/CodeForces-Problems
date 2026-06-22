/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
   
    ll n,k; 
    cin>>n>>k;
    vector<ll> arr(n);
    for (auto& x:arr) cin>>x;
 
    sort(arr.begin(),arr.end());
 
    vector<pair<ll,ll>> a={{arr[0],1}};
    for(ll i=1;i<n;i++){
        if(arr[i]==arr[i-1]) a.back().ss++;
 
        else a.emplace_back(arr[i],1);
    }
 
    while(a.size()>0) {
        n=a.size();
        if(a[n-1].ss%2==0){
            cout<<"YES
";
            return;
        }
        if(n== 1){
            cout<<"NO
";
            return;
        }
        if(a[n-1].ff-a[n-2].ff<=k){
            cout<<"YES
";
            return;
        }
        a.pop_back();
    }
 
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