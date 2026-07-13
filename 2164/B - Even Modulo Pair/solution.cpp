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
 
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    for(int i=0;i<n-1;i++){
        if((arr[i+1]%arr[i])%2==0){
           cout<<arr[i]<<" "<<arr[i+1]<<"
";
           return;
        }
    }
     
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[j]%arr[i])%2==0){
               cout<<arr[i]<<" "<<arr[j]<<"
";
               return;
            }
        }
    }
    cout<<-1<<"
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