/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
const ll maxX=1e6;
 
bool sol(ll n,ll a,ll b,ll c,ll d){
    if(abs(b-c)>1) return false;
    else if(abs(b-c)==1) return true;
    else if(b!=0) return true;
    else if(a==0||d==0) return true;
    else return false;
}
 
void solve() {
   
   string s;
   vector<string> strLine;
 
   ll maxLen=0;
 
   while(getline(cin,s)){
      strLine.pb(s);
      maxLen=max(maxLen,(ll)s.length());
   }
 
   ll width=maxLen+2;
   string frame(width,'*');
 
   cout<<frame<<"
";
 
   bool leftBiased=true;
 
   for(const string& x:strLine){
       ll spaces=maxLen-x.length();
       ll leftSpace=spaces/2;
       ll rightSpace=spaces-leftSpace;
 
       if(spaces%2!=0){
        if(!leftBiased){
            leftSpace++;
            rightSpace--;
        }
        leftBiased=!leftBiased;
       }
 
       cout<<"*";
       for(int i=0;i<leftSpace;i++) cout<<" ";
       cout<<x;
       for(int i=0;i<rightSpace;i++) cout<<" ";
        cout<<"*
";
       
   }
    cout<<frame<<"
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