/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    ll n;
    cin>>n;
    set<ll> arr;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        arr.insert(x);
    }
    ll count=0;
    while(!arr.empty()){
        ll last=*arr.rbegin();
        arr.erase(last);
        if(last%2==0){
            count++;
            arr.insert(last/2);
        }
    }
    cout<<count<<"
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