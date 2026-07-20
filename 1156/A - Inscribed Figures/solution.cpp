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
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    ll totalPoints=0;
    for(int i=0;i<n-1;i++){
        if((arr[i]==2&&arr[i+1]==3)||(arr[i]==3&&arr[i+1]==2)){
            cout<<"Infinite
";
            return;
        }
 
        if((arr[i]==1&&arr[i+1]==2)||(arr[i]==2&&arr[i+1]==1)) totalPoints+=3;
        else if((arr[i]==1&&arr[i+1]==3)||(arr[i]==3&&arr[i+1]==1)) totalPoints+=4;
        if(i>0&&arr[i-1]==3&&arr[i]==1&&arr[i+1]==2) totalPoints-=1;
    }
    cout<<"Finite
"<<totalPoints<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}