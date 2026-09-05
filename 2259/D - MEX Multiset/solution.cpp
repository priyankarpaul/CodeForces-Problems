/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
bool prime(ll sum){
    if(sum<2) return false;
    if(sum==3||sum==2) return true;
    if(sum%2==0||sum%3==0) return false;
    for(ll i=5;i*i<=sum;i+=6){
       if(sum%i==0||sum%(i+2)==0) return false;
    }
   return true;
}
 
ll combination(ll n,ll k){
    if(k<0||k>n) return 0;
    if(k==0||k==n) return 1;
    if(k>n/2)k=n-k;
    ll res=1;
    for(ll i=1;i<=k;i++){
        res=res*(n-i+1)/i;
    }
    return res;
}
 
void solve() {
    
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<vector<ll>> indexes(n+2);
    
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
        if(arr[i]<=n+1){ 
            indexes[arr[i]].pb(i);
        }
    }
    
    if(indexes[0].size()==1){
        cout<<"NO
";
        return;
    }
    
    cout << "YES
";
    string ans(n, 'A');
    ll m=0;
    while(m<=n&&indexes[m].size()>=2) m++;
 
    for(int i=0;i<m;i++){
        ans[indexes[i][0]]='A';
        ans[indexes[i][1]]='B';
    }
 
    if(m<=n&&indexes[m].size()==1){
        ans[indexes[m][0]]='C';
    }
    
    cout<<ans<<"
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