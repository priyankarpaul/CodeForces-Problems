/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
    ll k;
    cin>>k;
    ll countTwo=0;
    ll countThree=0;
    vector<ll> arr(k);
    for(int i=0;i<k;i++){
        cin>>arr[i];
        if(arr[i]>=3){
            countThree++;
        }
        if(arr[i]>=2){
            countTwo++;
        }
    }
 
    if(countThree>=1||countTwo>=2){
        cout<<"YES
";
    }
    else cout<<"NO
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