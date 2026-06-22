/*Author SungJinWoo*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
    vector<string> grid(4);
    for(int i=0;i<4;i++) cin>>grid[i];
 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            ll blackCount=0;ll whiteCount=0;
            for(int r=i;r<i+2;r++){
                for(int k=j;k<j+2;k++){
                    if(grid[r][k]=='#') blackCount++;
                    else whiteCount++;
                }
            }
            if(blackCount>=3||whiteCount>=3){
               cout<<"YES
";
               return;
            } 
                
        }
    }
    cout<<"NO
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