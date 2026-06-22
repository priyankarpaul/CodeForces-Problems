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
 
   if(n==1||n==2){
    cout<<1<<"
"<<1<<"
";
    return;
   }
 
   if(n==3){
    cout<<2<<"
";
    cout<<1<<" "<<3<<"
";
    return; 
   }
 
   for(int i=1;i<=n;i+=2){
     arr.pb(i);
   }
   reverse(arr.begin(),arr.end());
   if(n%2!=0){
        for(int i=n-1;i>=1;i-=2){
           arr.pb(i);
        }
    }
    if(n%2==0){
        for(int i=n;i>=1;i-=2){
           arr.pb(i);
        }
    }
    cout<<arr.size()<<"
";
   for(auto x:arr){
    cout<<x<<" ";
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