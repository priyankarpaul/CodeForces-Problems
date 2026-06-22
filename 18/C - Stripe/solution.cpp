/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
const ll maxX=1e6;
 
 
void solve() {
   
   ll n;
   cin>>n;
   vector<ll> arr(n);
   ll totalSum=0;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    totalSum+=arr[i];
   }
 
   if(totalSum%2){
    cout<<"0
";
    return;
   }
 
   ll leftSum=totalSum/2;
   ll current=0;
   ll count=0;
 
   for(int i=0;i<n-1;i++){
     current+=arr[i];
     if(current==leftSum) count++;
   }
 
   cout<<count<<"
";
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