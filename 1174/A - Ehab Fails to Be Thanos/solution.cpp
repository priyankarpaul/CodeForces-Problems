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
   vector<ll> arr;
   for(int i=0;i<2*n;i++){
    ll x;
    cin>>x;
    arr.pb(x);
 
   }
   sort(arr.rbegin(),arr.rend());
 
   ll sum1=0;
   ll sum2=0;
 
   for(int i=0;i<n;i++) sum1+=arr[i];
   for(int i=n;i<2*n;i++) sum2+=arr[i];
   
   if(sum1==sum2){
    cout<<-1<<"
";
    return;
   }
   else{
      for(int i=0;i<2*n;i++){
          cout<<arr[i]<<" ";
      }
   }
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
 #ifndef ONLINE_JUDGE
     freopen("input.txt",  "r",  stdin);
     freopen("output.txt", "w", stdout);
 #endif
 
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}