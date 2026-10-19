/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
ll calcAnswer(vector<ll> &numbers){
    sort(begin(numbers),end(numbers));
    ll result=0;
    
    ll sz=numbers.size();
    for (int i=0;i<sz;i++) result+=abs(numbers[i]-numbers[sz/2]);
    return result;
}
 
void solve(){
 
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> matrix(n);
    for(int i=0;i<n;i++){
        matrix[i].resize(m);
        for(int j=0;j<m;j++) cin>>matrix[i][j];
    }
 
    ll answer=0;
 
    ll leftRow=0,rightRow=n-1;
    while(leftRow<=rightRow){
        ll leftColumn=0,rightColumn=m-1;
        while(leftColumn<=rightColumn){
            vector<ll>curNumbers={matrix[leftRow][leftColumn]};
            if(leftRow!=rightRow) curNumbers.pb(matrix[rightRow][leftColumn]);
            if(rightColumn!= leftColumn) curNumbers.pb(matrix[leftRow][rightColumn]);
            if(leftColumn!=rightColumn&&leftRow!=rightRow) curNumbers.pb(matrix[rightRow][rightColumn]);
            
            answer+=calcAnswer(curNumbers);
            leftColumn++;
            rightColumn--;
        }
        leftRow++; 
        rightRow--;
    }
 
    cout<<answer<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}