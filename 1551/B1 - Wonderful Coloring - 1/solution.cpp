/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    string s;
    cin>>s;
    ll n=s.size();
    ll onesCount=0;
    ll moreCount=0;
    vector<ll> freq(26,0);
    for(auto x:s){
        freq[x-'a']++;
    }
 
    for(int i=0;i<26;i++){
        if(freq[i]==1) onesCount++;
        else if(freq[i]>1) moreCount++;
    }
 
    cout<<moreCount+(onesCount/2)<<"
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