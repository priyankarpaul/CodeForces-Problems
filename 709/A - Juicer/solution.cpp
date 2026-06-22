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
    ll b,d;
    cin>>b>>d;
    ll count=0;
    ll waste=0;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++){
            if(arr[i]<=b){
                waste+=arr[i];
                if(waste>d){
                    count++;
                    waste=0;
                }
            }
        }
        cout<<count<<"
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