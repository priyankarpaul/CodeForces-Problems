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
     ll twoCount=0;
     ll threeCount=0;
     while(n%2==0){
        twoCount++;
        n/=2;
     }
     while(n%3==0){
        threeCount++;
        n/=3;
     }
     if(n==1&&twoCount<=threeCount) cout<<2*threeCount-twoCount<<"
";
     else cout<<-1<<"
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