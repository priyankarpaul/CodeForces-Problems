/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e8;
ll dp[101][101][2];
 
void solve() {
    ll n1,n2,k1,k2;
    cin>>n1>>n2>>k1>>k2;
 
    dp[0][0][0]=1;
    dp[0][0][1]=1;
    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            for(int x=1;x<=k1;x++){
                if(i>=x){
                    dp[i][j][0]=(dp[i][j][0]+dp[i-x][j][1])%MOD;
                }
            }
            for (int y=1;y<=k2;y++){
                if(j>=y){
                    dp[i][j][1]=(dp[i][j][1]+dp[i][j-y][0])%MOD;
                }
            }
        }
    }
 
    ll ans=(dp[n1][n2][0]+dp[n1][n2][1])%MOD;
    cout<<ans<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}