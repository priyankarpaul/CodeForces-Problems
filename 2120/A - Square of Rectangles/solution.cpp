/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long int
#define ff              first
#define ss              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "
"
#define double          double
 
const ll MOD = 1e9 + 7;
 
ll digit(ll n){
    ll sum=0;
    while(n!=0){
        ll remainder=n%10;
        sum=sum*10+remainder;
        n/=10;
    }
    return sum;
}
 
void solve() {
    ll l1,b1,l2,b2,l3,b3;
    cin>>l1>>b1>>l2>>b2>>l3>>b3;
 
    if(l1+l2+l3==b1&&b1==b2&&b2==b3) cout<<"YES
";
    else if(l2+l3==l1&&b2==b3&&b1+b2==l1) cout<<"YES
";
    else if(b1+b2+b3==l1&&l1==l2&&l2==l3) cout<<"YES
";
    else if(b2+b3==b1&&l2==l3&&l1+l2==b1) cout<<"YES
";
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