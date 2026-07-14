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
 
    string s;
    cin>>s;
 
    ll maxiLength=0;
    ll currentLength=0;
 
    for(auto x:s){
        if(x=='#'){
            currentLength++;
            maxiLength=max(maxiLength,currentLength);
        }
        else{
            currentLength=0;
        }
    }
    cout<<(maxiLength+1)/2<<"
";
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