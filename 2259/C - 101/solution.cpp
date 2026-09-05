/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;
 
bool prime(ll sum){
    if(sum<2) return false;
    if(sum==3||sum==2) return true;
    if(sum%2==0||sum%3==0) return false;
    for(ll i=5;i*i<=sum;i+=6){
       if(sum%i==0||sum%(i+2)==0) return false;
    }
   return true;
}
 
ll combination(ll n,ll k){
    if(k<0||k>n) return 0;
    if(k==0||k==n) return 1;
    if(k>n/2)k=n-k;
    ll res=1;
    for(ll i=1;i<=k;i++){
        res=res*(n-i+1)/i;
    }
    return res;
}
 
void solve() {
    
    ll n;
    cin>>n;
    vector<ll> arr(n);
    vector<ll> ones,negOnes;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) ones.pb(i);
        else if (arr[i]==-1) negOnes.pb(i);
        
    }
    
    ll bestScore=0;
    ll bestL=-1,bestR = -1;
    
    if(ones.empty()){
        if(!negOnes.empty()){
            bestL=negOnes.front();
            bestR=negOnes.back();
            bestScore=bestR-bestL+1;
        } 
        else bestScore=0;
    } 
    else{
        bestScore=1;
        bestL=ones[0];
        bestR=ones[0];
 
        for(auto i=0;i+1<ones.size();i++){
            ll score=ones[i+1]-ones[i]+1;
            if(score>bestScore){
                bestScore=score;
                bestL=ones[i];
                bestR=ones[i+1];
            }
        }
        
        ll firstOne=ones.front();
        if(!negOnes.empty()&&negOnes.front()<firstOne){
            ll score=firstOne-negOnes.front()+1;
            if(score>bestScore){
                bestScore=score;
                bestL=negOnes.front();
                bestR=firstOne;
            }
        }
        
        ll lastOne=ones.back();
        if(!negOnes.empty()&&negOnes.back()>lastOne){
            ll score=negOnes.back()-lastOne+1;
            if(score>bestScore){
                bestScore =score;
                bestL=lastOne;
                bestR=negOnes.back();
            }
        }
    }
 
    for(int i=0;i<n;i++){
        if(arr[i]==-1) arr[i]=0; 
    }
    if(bestScore>0){
        arr[bestL]=1;
        arr[bestR]=1;
    }
    
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<"
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