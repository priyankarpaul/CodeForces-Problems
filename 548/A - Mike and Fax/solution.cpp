/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
bool isPalindrome(const string& str) {
    ll left=0;
    ll right=str.length()-1;
    while(left<right){
        if(str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
 
void solve() {
    
    string s;
    cin>>s;
 
    ll k;
    cin>>k;
 
    ll n=s.size();
    if(n%k!=0){
        cout<<"NO
";
        return;
    }
 
    ll segLength=n/k;
    for(int i=0;i<n;i+=segLength){
        string sub=s.substr(i,segLength);
        if(!isPalindrome(sub)){
            cout<<"NO
";
            return;
        }
    }
    cout << "YES
";
    
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}