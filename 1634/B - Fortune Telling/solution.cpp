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
    
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
 
    ll f=0;
    //f==0--> f is odd
    for(int i=0;i<n;i++){
        if(arr[i]&1){
            f=(!f);
        }
    }
    if(x&1){
       if((f&1)&&(y&1)||!(f&1)&&!(y&1)){
        cout<<"Bob
";
       } 
       else cout<<"Alice
";
    }
    else{
        if((f&1)&&(y&1)||!(f&1)&&!(y&1)){
        cout<<"Alice
";
       } 
       else cout<<"Bob
";
    }
 
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