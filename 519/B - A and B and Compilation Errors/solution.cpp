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
    vector<ll> brr(n-1);
    vector<ll> crr(n-2);
 
    ll sum1=0,sum2=0,sum3=0;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum1+=arr[i];
    }
    for(int i=0;i<n-1;i++){
     cin>>brr[i];
     sum2+=brr[i];
    }
    for(int i=0;i<n-2;i++){
     cin>>crr[i];
     sum3+=crr[i];
    }
 
    ll ans1=sum1-sum2;
    ll ans2=sum2-sum3;
 
    cout<<ans1<<"
"<<ans2<<"
";
    
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}