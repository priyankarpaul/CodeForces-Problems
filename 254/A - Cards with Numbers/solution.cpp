/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
 vector<int> arr[5005];
 
void solve() {
   
   int n;
   cin>>n;
  
   for(int i=1;i<=2*n;i++){
    int x;
    cin>>x;
    arr[x].pb(i);
   }
 
   for(int i=1;i<=5000;i++){
    if(arr[i].size()%2!=0){
        cout<<-1<<"
";
        return;
    }
   }
 
   for(int i=1;i<=5000;i++){
    for(int j=0;j<arr[i].size();j+=2){
        cout<<arr[i][j]<<" "<<arr[i][j+1]<<"
";
    }
   }
    
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
// #ifndef ONLINE_JUDGE
     freopen("input.txt",  "r",  stdin);
     freopen("output.txt", "w", stdout);
// #endif
 
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}