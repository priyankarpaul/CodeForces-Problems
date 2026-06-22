/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
bool isSqrt(ll n){
    ll x=sqrt(n);
    return x*x==n;
}
 
void solve() {
   
   ll n;
   cin>>n;
   string s;
   cin>>s;
   ll CountOfZeros=0;
   for(int i=0;i<n;i++){
    if(s[i]=='0') CountOfZeros++;
   }
   ll countOfOnes=0;
   for(int i=0;i<n;i++){
    if(s[i]=='1') countOfOnes++;
   }
   if(CountOfZeros%2){
     cout<<CountOfZeros<<"
";
     for(int i=0;i<n;i++){
        if(s[i]=='0'){
            cout<<i+1<<" ";
        }
     }
     cout<<"
";
   } 
   else if((countOfOnes%2)==0){
    cout<<countOfOnes<<"
";
    if(countOfOnes!=0){
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cout<<i+1<<" ";
            }
        }
        cout<<"
";
    }
   }
   else cout<<-1<<"
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