/*Author SungJinWoo*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
bool digit(ll n){
    if(n%10!=0){
        return true;
    }
    else return false;
}
 
void solve() {
    ll n,k,p,m;
    cin>>n>>k>>p>>m;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    p--;
    deque<ll> deck;
    for(int i=0;i<n;i++) deck.pb(i);
    ll ans=0;
    while(1){
         ll winPos=-1;
         for(int i=0;i<min(k,(ll)deck.size());i++){
            if(deck[i]==p){
                winPos=i;
                break;
            }
         }
         ll count=0;
         if(winPos!=-1){
            count=winPos;
         }
         else{
            ll highest=0;
            for(int i=1;i<k;i++){
                if(arr[deck[i]]<arr[deck[highest]]){
                    highest=i;
                }
            }
            count=highest;
         }
         ll card=deck[count];
         ll cost=arr[card];
         if(cost>m) break;
         m-=cost;
         deck.erase(deck.begin()+count);
         deck.pb(card);
         if(card==p) ans++;
    }
    cout<<ans<<"
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