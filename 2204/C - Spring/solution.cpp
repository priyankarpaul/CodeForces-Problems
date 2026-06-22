/*Author SungJinWoo18*/
 
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
 
ll lcmm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}
 
void solve() {
    
    ll a,b,c,m;
    cin>>a>>b>>c>>m;
 
    ll aliceAndBob=lcmm(a,b);
    ll aliceAndCarol=lcmm(a,c);
    ll bobAndCarol=lcmm(b,c);
    ll aliceBobCarol=lcmm(aliceAndBob,c);
 
    ll aliceDays=m/a;
    ll bobDays=m/b;
    ll carolDays=m/c;
    ll aliceBobDays=m/aliceAndBob;
    ll aliceCarolDays=m/aliceAndCarol;
    ll bobCarolDays=m/bobAndCarol;
    ll aliceBobCarolDays=m/aliceBobCarol;
 
 
    ll alice=6*(aliceDays-aliceBobDays-aliceCarolDays+aliceBobCarolDays)+
    3*(aliceBobDays-aliceBobCarolDays)+3*(aliceCarolDays-aliceBobCarolDays)+
    2*(aliceBobCarolDays);
 
    ll bob=6*(bobDays-aliceBobDays-bobCarolDays+aliceBobCarolDays)+
    3*(aliceBobDays-aliceBobCarolDays)+3*(bobCarolDays-aliceBobCarolDays)+
    2*(aliceBobCarolDays);
 
    ll carol=6*(carolDays-aliceCarolDays-bobCarolDays+aliceBobCarolDays)+
    3*(aliceCarolDays-aliceBobCarolDays)+
    3*(bobCarolDays-aliceBobCarolDays)+
    2*(aliceBobCarolDays);
 
    cout<<alice<<" "<<bob<<" "<<carol<<"
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