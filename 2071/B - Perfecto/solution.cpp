/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
bool perfectSquare(ll x){
    if(x<0) return false;
    ll r=round(sqrt(x));
    return r*r==x;
}
 
void solve() {
 
    ll n;
    cin>>n;
    
    ll totalSum=n*(n+1)/2;
    if (perfectSquare(totalSum)){
        cout<<-1<<"
";
        return;
    }
    
    vector<ll> p(n);
    for (int i=0;i<n;i++) {
        p[i]=i+1;
    }
    
    ll currentSum=0;
    for (int i=0;i<n;i++){
        if (perfectSquare(currentSum+p[i])){
            swap(p[i],p[i+1]);
        }
        currentSum+=p[i];
    }
    
    for (int i=0;i<n;i++){
        cout<<p[i]<<(i==n-1?"":" ");
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