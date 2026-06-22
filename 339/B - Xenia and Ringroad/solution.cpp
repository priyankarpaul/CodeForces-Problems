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
 
int upperBound(vector<ll>& arr,ll n,ll target){
    ll low=0;
    ll high=n-1;
    ll ans=n;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(arr[mid]>target){
            ans=min(mid,ans);
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
 
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll> arr(m);
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    ll totalSteps=arr[0]-1;
    for(int i=1;i<m;i++){
        if(arr[i]<arr[i-1]){
            totalSteps+=(n-arr[i-1])+arr[i];
        }else if(arr[i]>=arr[i-1]){
            totalSteps+=arr[i]-arr[i-1];
        }
    }
    cout<<totalSteps<<"
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