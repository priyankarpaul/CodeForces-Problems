/*Author SungJinWoo*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
bool digit(ll n){
    if(n%10!=0){
        return true;
    }
    else return false;
}
 
void solve() {
    ll n;
    cin>>n;
    ll count2021=n%2020;
    ll count2020=(n-count2021)/2020-count2021;
    if(count2020>=0&&2020*count2020+2021*count2021==n){
        cout<<"YES
";
    }
    else cout<<"NO
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