/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
 
ll getScore(vector<ll>& arr,ll k) {
    ll n=arr.size();
 
    vector<bool> seen(n+1,false);
    vector<ll> f;
 
    ll mex=0;
    for(int i=0;i<n;i++){
        seen[arr[i]]=true;
 
        while(seen[mex]) mex++;
        f.pb(mex);
    }
    sort(f.rbegin(),f.rend());
    return f[k-1];
}
 
void solve(){
    
    ll n,k;
    cin>>n>>k;
 
    vector<ll> arr(n);
 
    for(int i=0;i<n;i++) cin>>arr[i];
    
 
    ll val=getScore(arr,k);
    ll best=val;
 
    int index1=-1,index2=-1;
 
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            swap(arr[i],arr[j]);
            ll current=getScore(arr,k);
            if(current>best) {
                best=current;
                index1=i+1;
                index2=j+1;
            }
            swap(arr[i],arr[j]);
        }
    }
 
    if(index1==-1) cout<<-1<<"
";
    else cout<<index1<<" "<<index2<<"
";
    
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}