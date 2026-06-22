/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
bool digit(ll n){
    if(n%10!=0){
        return true;
    }
    else return false;
}
 
ll lcmm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}
 
void solve() {
   
   ll n,c,k;
   cin>>n>>c>>k;
 
   vector<ll> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
 
   sort(arr.begin(),arr.end());
 
   priority_queue<ll,vector<ll>,greater<ll>> pq;
   ll index=0;
   while(true){
    while(index<n&&arr[index]<=c){
        pq.push(arr[index]);
        index++;
    }
    if(pq.empty()){
        break;
    }
    ll x=pq.top();
    pq.pop();
 
    ll used=min((c-x),k);
    x+=used;
    k-=used;
    c+=x;
   }
   cout<<c<<"
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