/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
   
    ll a,b,c;
    cin>>a>>b>>c;
 
    ll newA=b-(c-b);
    if(newA>=a&&newA%a==0&&newA!=0){
        cout<<"YES
";
        return;
    }
    ll newB=a+(c-a)/2;
    if(newB>b&&(c-a)%2==0&&newB%b==0&&newB!=0){
        cout<<"YES
";
        return;
    }
    ll newC=a+2*(b-a);
    if(newC>=c&&newC%c==0&&newC!=0){
        cout<<"YES
";
        return;
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}