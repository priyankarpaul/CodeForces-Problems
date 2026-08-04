/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
void solve() {
 
    ll n;
    cin>>n;
    
    vector<ll> arr(n);
    map<ll,ll> count;
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
        count[arr[i]]++;
    }
    vector<ll> uniqueArr;
    for(auto [val,cnt]:count) uniqueArr.pb(val);
 
    if(uniqueArr[0]!=0){
        cout<<"-1
";
        return;
    }
 
    ll k=uniqueArr.size();
    map<ll,ll> brr;
 
    for(int i=1;i<k;i++){
        ll diff=uniqueArr[i]-uniqueArr[i-1];
        ll c=count[uniqueArr[i-1]];
        if(diff%c!=0){
            cout<<-1<<"
";
            return;
        }
        ll x=diff/c;
        if(x<=0){
            cout<<-1<<"
";
            return;
        }
        brr[uniqueArr[i-1]]=x;
    }
 
    for(int i=1;i<k-1;i++){
        if(brr[uniqueArr[i]]<=brr[uniqueArr[i-1]]){
            cout<<"-1
";
            return;
        }
    }
    
    if(k==1) brr[uniqueArr[0]]=1;
    else brr[uniqueArr[k-1]]=brr[uniqueArr[k-2]]+1;
 
    for(int i=0;i<n;i++) cout<<brr[arr[i]]<<" ";
    cout<<"
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