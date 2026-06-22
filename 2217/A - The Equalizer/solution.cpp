/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
    
   ll n,k;
   cin>>n>>k;
   vector<ll> arr(n);
   ll sum=0;
   for(int i=0;i<n;i++) {
    cin>>arr[i];
    sum+=arr[i];
   }
 
   if(sum%2==1){
    cout<<"YES
";
   }
   else if((n*k)%2==0){
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