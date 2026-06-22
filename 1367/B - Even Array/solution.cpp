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
    ll count1=0,count2=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x%2!=i%2){
            if(i%2==0) count1++;
            else count2++;
        }
    }
    if(count1!=count2) cout<<-1<<"
";
    else cout<<count1<<"
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