/*Author SungJinWoo*/
 
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
    while(n>0){
        if(n>=5){
            count+=1;
            n-=5;
        }
        else if(n==4){
            count+=1;
            n-=4;
        }
        else if(n==3){
            count+=1;
            n-=3;
        }
        else if(n==2){
            count+=1;
            n-=2;
        }
        else if(n==1){
            count++;
            n-=1;
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