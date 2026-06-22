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
  
  ll count25=0;
  ll count50=0;
 
  for(int i=0;i<n;i++){
      if(arr[i]==25) count25++;
      else if(arr[i]==50){
        if(count25>0){
            count25--;
            count50++;
        }
        else{
            cout<<"NO
";
            return;
        }
      }
      else if(arr[i]==100){
        if(count50>0&&count25>0){
           count25--;
           count50--;
        }
        else if(count25>=3){
            count25-=3;
        }
        else{
            cout<<"NO
";
            return;
        }
      }
  }
   cout<<"YES
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