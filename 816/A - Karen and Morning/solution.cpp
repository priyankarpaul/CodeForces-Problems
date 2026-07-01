/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
bool isPalindrome(ll hour,ll minute){
    string str="";
    if(hour<10) str+="0";
    str+=to_string(hour)+":";
    if(minute<10) str+="0";
    str+=to_string(minute);
 
     return(str[0]==str[4]&&str[1]==str[3]);
}
 
void solve() {
    string s;
    cin>>s;
   
 
    ll hour=stoi(s.substr(0,2));
    ll minute=stoi(s.substr(3,2));
 
    ll minutesSleep=0;
 
    while(!isPalindrome(hour,minute)){
        minutesSleep++;
        minute++;
        if(minute==60){
            minute=0;
            hour++;
        }
        if(hour==24){
            hour=0;  
        }
    }
 
    cout<<minutesSleep<<"
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