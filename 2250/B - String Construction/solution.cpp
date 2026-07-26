/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
    
    ll n,k;
    cin>>n>>k;
 
    ll transition=n-k;
    if(transition<2){
        cout<<-1<<"
";
        return;
    }
 
    ll count1=(transition+1)/2,count2=transition/2;
    ll zeroCount=(n+1)/2;
    ll oneCount=n/2;
 
    ll add1=zeroCount-count1,add2=oneCount-count2;
    string ans="";
    ans.reserve(n);
    for(ll i=0;i<transition;i++){
        char c;
        if(i%2==0) c='0';
        else c='1';
        ll z=1;
        if(i==0) z+=add1;
        else if(i==1) z+=add2;
        ans.append(z,c);
    }
    cout<<ans<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}