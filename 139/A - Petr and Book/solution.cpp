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
    
    vector<ll> arr(7);
    for(int i=0;i<7;i++) cin>>arr[i];
 
    ll dayCount=0;
    while(n>0){
        n-=arr[dayCount];
        if(n<=0){
           cout<<dayCount+1<<"
";
           return;
        }
        dayCount=(dayCount+1)%7;
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