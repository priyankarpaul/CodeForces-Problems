/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
    ll n;
    cin>>n;
    ll countOne=0;
    ll oneZero=0,oneOne=0,zeroOne=0,zeroZero=0;
    vector<ll> arr(n);
    vector<ll> brr(n);
 
    for(int i=0;i<n;i++){
     cin>>arr[i];
     if(arr[i]==1) countOne++;
    }
 
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
 
    for(int i=0;i<n;i++){
        if(arr[i]==1&&brr[i]==0) oneZero++;
        else if(arr[i]==1&&brr[i]==1) oneOne++;
        else if(arr[i]==0&&brr[i]==0) zeroZero++;
        else if(arr[i]==0&&brr[i]==1) zeroOne++;
    }
 
    if(oneZero==0&&zeroOne==0){
        cout<<0<<"
";
        return;
    }
 
    if(countOne==0){
        cout<<-1<<"
";
        return;
    }
 
    if(oneZero%2!=0) cout<<1<<"
";
 
    else{
        if(oneZero==0&&zeroZero==0) cout<<-1<<"
";
        else cout<<2<<"
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