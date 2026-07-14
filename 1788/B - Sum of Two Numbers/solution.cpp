/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
ll x(ll n){
    return n+n%10;
}
 
void solve() {
    
    string s;
    cin>>s;
 
    string x="",y="";
    bool flag=true;
 
    for(auto c:s){
        ll digit=c-'0';
        if(digit%2==0){
            x+=to_string(digit/2);
            y+=to_string(digit/2);
        }   
        else{
            if(flag){
                x+=to_string(digit/2+1);
                y+=to_string(digit/2);
            }
            else{
                x+=to_string(digit/2);
                y+=to_string(digit/2+1);
            }
            flag=!flag;
        }     
    }
    cout<<stoi(x)<<" "<<stoi(y)<<"
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