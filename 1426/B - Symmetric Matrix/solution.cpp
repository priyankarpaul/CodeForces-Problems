/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {  
    ll n,m;
    cin>>n>>m;
    bool has_symmetric_tile=false;
 
    for(int i=0;i<n;i++){
        ll top_left,top_right;
        ll bottom_left,bottom_right;
        
        cin>>top_left>>top_right;
        cin>>bottom_left >> bottom_right;
 
        if(top_right==bottom_left){
            has_symmetric_tile=true;
        }
    }
    if(has_symmetric_tile&&(m%2==0)){
        cout<<"YES
";
    } 
    else{
        cout<<"NO
";
    }
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