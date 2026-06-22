/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
ll lowerBound(vector<ll> &arr,ll n,ll target){
    ll ans=n;
    ll low=0;
    ll high=n-1;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(arr[mid]>=target){
            ans=min(ans,mid);
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
 
ll upperBound(vector<ll> &arr,ll n,ll target){
    ll ans=n;
    ll low=0;
    ll high=n-1;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(arr[mid]>target){
            ans=min(ans,mid);
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
 
// bool check(ll mid,ll n,ll x,ll y){
//     ll copies=1;
//     ll time=min(x,y);
 
//     ll timeLeft=mid-time;
//     if(timeLeft<0) return false;
//     copies+=(timeLeft/x)+(timeLeft/y);
 
//     if(copies>=n) return true;
//     else return false;
// }
 
bool check(ll x,ll k,vector<ll>& arr){
    ll usedWorkers=1;
    ll currentWorkLoad=0;
    for(auto work:arr){
        if(currentWorkLoad+work<=x){
            currentWorkLoad+=work;
        }
        else{
            if(usedWorkers==k){
                return false;
            }
            usedWorkers++;
            if(work>x){
                return false;
            }
            currentWorkLoad=work;
        }
    }
    return true;
}
 
void solve() {
   
    ll n,k;
    cin>>n>>k;
    ll maxi=0,ans=0,sum=0;
    vector<ll> arr(n),arr1(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) cin>>arr1[i];
 
    for(int i=0;i<min(k,n);i++){
        sum+=arr[i];
        maxi=max(arr1[i],maxi);
        ans=max(ans,sum+(k-(i+1))*maxi);
    }
    cout<<ans<<"
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