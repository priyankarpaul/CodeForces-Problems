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
 
   vector<ll> boys(n);
   for(int i=0;i<n;i++) cin>>boys[i];
   sort(boys.begin(),boys.end());
 
   ll m;
   cin>>m;
 
   vector<ll> girls(m);
   for(int i=0;i<m;i++) cin>>girls[i];
   sort(girls.begin(),girls.end());
 
   ll count=0;
 
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(abs(boys[i]-girls[j])<=1){
            girls[j]=100000;
            count++;
            break;
        }
    }
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