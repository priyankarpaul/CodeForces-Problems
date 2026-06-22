/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
void solve() {
 int n;
    cin >> n;
    string s;
    cin >> s;
    int balance = 0;
    int moves = 0;
    for (char c : s) {
        if (c == '(') {
            balance++;
        }
else {
            balance--;
        }
        if (balance < 0) {
            moves++;
            balance = 0; // Reset balance after moving
        }
    }
    cout << moves << endl;
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