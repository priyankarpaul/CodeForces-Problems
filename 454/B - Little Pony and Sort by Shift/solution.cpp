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
 
   ll count=0;
   ll index=-1;
 
   for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        count++;
        index=i+1;
    }
   }
 
   if(arr[n-1]>arr[0]){
    count++;
   }
   
   //cout<<count<<" "<<index<<"
";
 
   if(count==0){
    cout<<0<<"
";
   }
 
   else if(count==1){
        if(index==-1){
           cout<<0<<"
";
        }
        else{
            cout<<n-index<<"
";
        }
   }
 
   else cout<<-1<<"
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