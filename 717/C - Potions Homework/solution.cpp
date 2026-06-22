/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
//const ll MOD = 1e9 + 7;
 
void solve() {  
     
     ll n;cin>>n;
     const ll maxa=1e5;
 
     vector<ll> freq(maxa+1,0);
     for(int i=0;i<n;i++){
        ll x;cin>>x;
        freq[x]++;
     }
 
     vector<ll> leftFreq=freq,rightFreq=freq;
 
     ll l=1;
     ll r=maxa;
 
     ll ans=0;
     const ll MOD=10007;
 
     ll remaining=n;
 
     while(remaining>0){
        while(l<=maxa&&leftFreq[l]==0) l++;
        while(r>=1&&rightFreq[r]==0) r--;
 
        ll take=min(leftFreq[l],rightFreq[r]);
 
        ans=(ans+(take%MOD)*(l%MOD)%MOD*(r%MOD))%MOD;
 
        leftFreq[l]-=take;
        rightFreq[r]-=take;
        remaining-=take;
     } 
     cout<<ans%MOD<<"
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