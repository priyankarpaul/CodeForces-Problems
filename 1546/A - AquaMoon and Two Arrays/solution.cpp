/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
 
void solve() {
    
    ll n;
    cin>>n;
 
    vector<ll> arr(n);
    ll sumA=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sumA+=arr[i];
    }
    
    ll sumB=0;
    vector<ll> brr(n);
    for(int i=0;i<n;i++){
        cin>>brr[i];
        sumB+=brr[i];
    }
 
    if(sumA!=sumB){
        cout<<-1<<"
";
        return;
    }
 
    vector<ll> decrease;
    vector<ll> increase;
 
    for(int i=0;i<n;i++){
        ll diff=arr[i]-brr[i];
        if(diff>0){
            for(int k=0;k<diff;k++){
                decrease.pb(i+1);
            }
        }
        else if(diff<0){
            for(int k=0;k<abs(diff);k++){
                increase.pb(i+1);
            }
        }
    }
 
    cout<<decrease.size()<<"
";
 
    for(size_t i=0;i<decrease.size();i++){
        cout<<decrease[i]<<" "<<increase[i]<<"
";
    }
 
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