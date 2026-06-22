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
    ll n;
    cin>>n;
    ll a=1;
    ll x=1;
    ll column=1;
 
    while(n>=x+a){
        x+=a;
        a+=2;
        column+=1;
    }
    ll rows=n-x+1;
    if(rows<=column){
       cout<<rows<<" "<<column<<"
";
    } 
    else cout<<column<<" "<<(column-(rows-column))<<"
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