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
 
void solve() {
    
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll operationCount=0;
    ll currentMaxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=currentMaxi){
            operationCount++;
            currentMaxi=arr[i];
        }
    }
 
    cout<<operationCount<<"
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