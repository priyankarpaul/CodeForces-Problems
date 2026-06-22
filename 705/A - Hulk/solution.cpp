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
   if(n==1) cout<<"I hate it";
   else if(n>1) cout<<"I hate that";
    for(int i=2;i<n;i++){
        if(i%2==1&&i!=n) cout<<" I hate that";
        else if(i%2==0 && i!=n) cout<<" I love that";
    }
    if(n%2==0&&n>1) cout<<" I love it";
    else if(n>1) cout<<" I hate it";
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
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}