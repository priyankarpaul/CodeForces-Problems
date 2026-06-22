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
 
  const ll MAXI=1000000;
 
  vector<bool> present(MAXI+1,false);
  ll maxElement=0;
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    present[x]=true;
    if(x>maxElement) maxElement=x;
  }
 
  ll operationCount=0;
 
  for(ll i=maxElement;i>=1;i--){
    if(present[i]) continue;
 
    ll currentGcd=0;
    for(ll j=2*i;j<=maxElement;j+=i){
        if(present[j]){
            currentGcd=__gcd(currentGcd,j);
            if(currentGcd==i) break;
        }
    }
 
    if(currentGcd==i){
        present[i]=true;
        operationCount++;
    }
  }
 
  cout<<operationCount<<"
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