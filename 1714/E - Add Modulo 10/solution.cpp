/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
ll x(ll n){
    return n+n%10;
}
 
void solve() {
    
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]%5==0){
            flag=true;
            arr[i]=x(arr[i]);
        }
    }
 
    if(flag){
        cout<<(*min_element(arr.begin(),arr.end())==*max_element(arr.begin(),arr.end())?"YES
":"NO
");
    }
    else{
        bool flag2=false;
        bool flag12=false;
        for(int i=0;i<n;i++){
            ll q=arr[i];
            while(q%10!=2){
                q=x(q);
            }
            if(q%20==2) flag2=true;
            else flag12=true;
        }
        cout<<((flag2&flag12)?"NO
":"YES
");
    }
 
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