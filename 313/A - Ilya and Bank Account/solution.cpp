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
 
void solve() {
        string s;
        cin>>s;
        ll n=s.size(); 
        if(s[0]!='-'){ 
            cout<<s<<"
"; 
            return; 
        } 
        if(s[n-1]>s[n-2]){
        s.pop_back();
        n--;
        } 
        else if(s[n-1]<=s[n-2]){
        char s1=s[n-1];
        s.pop_back();
        n--;
        s.pop_back();
        n--; s.pb(s1);
        n++;
        } 
        if(s[n-1]=='0'&&s[n-2]=='-'){
        cout<<0<<"
"; 
        return;
        } 
        cout<<s<<"
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