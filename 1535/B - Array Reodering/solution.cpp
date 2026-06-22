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
   vector<ll> evens,odds;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
 
    for(int i=0;i<n;i++){
       if(arr[i]%2==0) evens.pb(arr[i]);
       else odds.pb(arr[i]);
    }
 
    vector<ll> newArr;
    for(int i=0;i<evens.size();i++){
       newArr.pb(evens[i]);
    }
 
    for(int i=0;i<odds.size();i++){
       newArr.pb(odds[i]);
    }
    
    ll count=0;
 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(newArr[i],newArr[j]*2)>1){
                count++;
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}