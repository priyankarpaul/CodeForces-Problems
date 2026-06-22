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
     if(n==2){
        cout<<"2 1
";
     }
     else{
        cout<<2<<" ";
        for(int i=n;i>=3;i--){
            cout<<i<<" ";
        }
        cout<<1<<"
";
     }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}