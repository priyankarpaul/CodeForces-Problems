/*Author SungJinWoo*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
    ll n;
    cin>>n;
    ll q;
    cin>>q;
    vector<ll> arr(n);
 
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
 
    vector<ll> difference(n+1,0);
    
    while(q--){
        ll l,r;
        cin>>l>>r;
        l--;
        r--;
        difference[l]+=1;
        if(r+1<n){
            difference[r+1]-=1;
        }
    }
    vector<ll> freq(n);
    freq[0]=difference[0];
    for(int i=1;i<n;i++){
        freq[i]=freq[i-1]+difference[i];
    }
 
    sort(arr.begin(),arr.end());
    sort(freq.begin(),freq.end());
 
    ll sum=0;
 
    for(int i=0;i<n;i++){
        sum+=arr[i]*freq[i];
    }
    cout<<sum<<"
";
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