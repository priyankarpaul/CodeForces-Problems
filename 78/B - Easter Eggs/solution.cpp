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
 
   string s="";
   for(int i=0;i<n/7;i++){
    cout<<"ROYGBIV";
   }
   if(n%7==1){
    cout<<"G
";
   }
   if(n%7==2){
    cout<<"GB
";
   }
   if(n%7==3){
    cout<<"YGB
";
   }
   if(n%7==4){
    cout<<"YGBI
";
   }
   if(n%7==5){
    cout<<"OYGBI
";
   }
   if(n%7==6){
    cout<<"OYGBIV
";
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