/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
void solve() {
    
    ll n;
    cin>>n;
    
    vector<ll> arr(n);
    int minVal=2e9; 
    bool hasOdd=false;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<minVal){
            minVal=arr[i];
        }
        if(arr[i]%2!=0){
            hasOdd=true;
        }
    }
    if(minVal%2!=0||!hasOdd) cout<<"YES
"; 
    else cout<<"NO
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