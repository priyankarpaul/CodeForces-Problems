/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
void solve(){
    
   vector<ll> arr(3);
   for(int i=0;i<3;i++){
    cin>>arr[i];
   }
 
   sort(arr.begin(),arr.end());
 
   if(arr[2]-arr[1]==1&&arr[1]-arr[0]==1) cout<<"YES
";
   else cout<<"No
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