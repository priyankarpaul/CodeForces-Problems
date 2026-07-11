/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solveQuery(string s){
    ll cp = 0;
    ll dp = 1; 
    vector<ll> counts(10,0);
    while(cp>=0&&cp<s.length()){
        char ch=s[cp];
 
        if(isdigit(ch)){
            ll digit=ch-'0';
            counts[digit]++;
 
            ll next_cp=cp+dp;
 
            if(digit==0){
                s.erase(cp,1);
                if(next_cp>cp){
                    next_cp--;
                }
            } 
            else{
                s[cp]=(digit-1)+'0';
            }
            cp=next_cp;
        } 
        else{
            if(ch=='<'){
                dp=-1;
            }
            else{
                dp=1;
            }
            ll next_cp=cp+dp;
            if(next_cp>=0&&next_cp<s.length()&&(s[next_cp]=='<'||s[next_cp]=='>')){
                s.erase(cp,1);
                if (next_cp>cp) {
                    next_cp--;
                }
            }
            cp=next_cp;
        }
    }
    for(int i=0;i<10;i++){
        cout<<counts[i]<<(i==9?"":" ");
    }
    cout<<"
";
}
 
void solve() {
    ll n, q;
    cin>>n>>q;
 
    string s;
    cin>>s;
 
    while(q--){
        ll l,r;
        cin>>l>>r;
        solveQuery(s.substr(l-1,r-l+1));
    }
 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
     freopen("input.txt",  "r",  stdin);
     freopen("output.txt", "w", stdout);
#endif
 
    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}