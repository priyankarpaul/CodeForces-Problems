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
   ll count=0;
   ll maxi=0;
   vector<ll> arr(n);
   for(int i=0;i<n;i++) cin>>arr[i];
 
   vector<ll> arr1=arr;
   arr1.insert(arr1.end(),arr.begin(),arr.end());
   
 
   for(int i=0;i<2*n;i++){
    if(arr1[i]==1){
        count++;
        maxi=max(maxi,count);
    }
    else{
      count=0;
    }
   }
   cout<<maxi<<"
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