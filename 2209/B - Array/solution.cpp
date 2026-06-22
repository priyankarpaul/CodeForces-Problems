/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
bool digit(ll n){
    if(n%10!=0){
        return true;
    }
    else return false;
}
 
ll lcmm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}
 
void solve() {
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<ll>res(n,0);
    multiset<ll>suffix(arr.begin()+1,arr.end());
    for(int i=0;i<n;i++){
        if(i>0)suffix.erase(suffix.find(arr[i]));
        ll best=0;
        best=max(best,(ll)distance(suffix.upper_bound(arr[i]),suffix.end()));
        best=max(best,(ll)distance(suffix.begin(),suffix.lower_bound(arr[i])));
        vector<ll>sv(suffix.begin(),suffix.end());
        int sz=sv.size();
        for(int k=0;k<sz;k++){
            if(sv[k]==arr[i])continue;
            ll mid=arr[i]+sv[k];
            ll count;
            if(sv[k]>arr[i]){
                count=sv.end()-upper_bound(sv.begin(),sv.end(),mid/2);
            }else{
                count=lower_bound(sv.begin(),sv.end(),(mid+1)/2)-sv.begin();
            }
            best=max(best,count);
        }
        res[i]=best;
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" 
"[i==n-1];
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