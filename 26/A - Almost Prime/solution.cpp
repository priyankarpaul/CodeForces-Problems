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
    ll count=0;
    bool flag[3001]={"false"};
    ll primeFactor[3001]={0};
    for(int i=2;i<=n;i++){
        if(!flag[i]){
            for(int j=i+i;j<=n;j+=i){
                flag[j]=true;
                primeFactor[j]+=1;
            }
        }
        if(primeFactor[i]==2){
            count+=1;
        }
    }
    cout<<count<<"
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