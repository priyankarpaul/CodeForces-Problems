/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
   
   ll n;
   cin>>n;
   vector<ll> arr(n);
   for(int i=0;i<n;i++) cin>>arr[i];
   reverse(arr.begin(),arr.end());
   unordered_set<ll> st;
   vector<ll> ans;
   for(int i=0;i<n;i++){
       if(st.find(arr[i])==st.end()){
        ans.pb(arr[i]);
        st.insert(arr[i]);
       }
   }
    cout<<ans.size()<<"
";
   for(int i=ans.size()-1;i>=0;i--){
    cout<<ans[i]<<" ";
   }
   cout<<"
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