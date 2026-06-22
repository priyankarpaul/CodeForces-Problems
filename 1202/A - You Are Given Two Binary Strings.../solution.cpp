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
#define double         long double
const ll MOD = 1e9 + 7;
 
void solve() {
    
     string x,y;
     cin>>x>>y;
     ll posX=0;
     ll posY=0;
     reverse(x.begin(),x.end());
     reverse(y.begin(),y.end());
     for(int i=0;i<y.size();i++){
        if(y[i]=='1'){
            posY=i;
            break;
        }
     }
     for(int i=posY;i<x.size();i++){
        if(x[i]=='1'){
            posX=i;
            break;
        }
     }
     cout<<posX-posY<<"
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