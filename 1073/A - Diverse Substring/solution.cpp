/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
ll sumDigit(ll n){
    ll sum=0;
    while(n){
        ll digit=n%10;
        if(digit==4||digit==7){
            sum+=digit;
            n/=10;
        }
        else return -1;
    }
    return sum;
}
 
 
void solve() {
    
    ll n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            cout<<"YES
";
            cout<<s[i]<<s[i+1];
            return;
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