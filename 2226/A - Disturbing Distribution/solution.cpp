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
 
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    
    bool onesFlag=false;
    ll sumOne=0;
    ll indexOne=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>1){
            sumOne+=arr[i];
            indexOne=i;
        }
    }
 
    for(int i=indexOne+1;i<n;i++){
        if(arr[i]==1) onesFlag=true;
        break;
    }
 
    ll total=sumOne;
    if(onesFlag||n==0) total+=1;
    else if(sumOne==0&&n>0) total=1;
 
    cout<<total<<"
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