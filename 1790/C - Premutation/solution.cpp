/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
ll digitSum(ll x){
    ll sum=0;
    while(x){
        ll digit=x%10;
        sum+=digit;
        x/=10;
    }
    return sum;
}
 
 
void solve() {
 
  ll n;
  cin>>n;
 
  vector<vector<ll>> sequence(n,vector<ll>(n-1));
 
  vector<ll> counts(n+1,0);
 
  for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        cin>>sequence[i][j];
    }
    counts[sequence[i][0]]++;
  }
 
  ll p1=-1;
  for(int i=1;i<=n;i++){
    if(counts[i]==n-1){
        p1=i;
        break;
    }
  }
  
  ll missingP1=-1;
  for(int i=0;i<n;i++){
    if(sequence[i][0]!=p1){
        missingP1=i;
        break;
    }
  }
 
  cout<<p1;
  for(int j=0;j<n-1;j++){
    cout<<" "<<sequence[missingP1][j];
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}