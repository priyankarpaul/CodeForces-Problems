/*Author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9 + 7;
 
struct car{
    ll start;
    ll end;
    ll id;
};
 
void solve(){
    
    ll l,b,f;
    cin>>l>>b>>f;
 
    ll n;
    cin>>n;
 
    vector<car> parked;
    map<ll, pair<int, int>> car_map;
 
    for (int req_idx = 1; req_idx <= n; ++req_idx) {
        int type, val;
        cin >> type >> val;
 
        if (type == 1) {
            int len = val;
            int found_pos = -1;
 
            sort(parked.begin(), parked.end(), [](const car& a, const car& b_car) {
                return a.start < b_car.start;
            });
 
            for (int pos = 0; pos <= l - len; ++pos) {
                bool valid = true;
 
                for (const auto& car : parked) {
                    if (car.end <= pos) {
                        if (pos - car.end < b) {
                            valid = false;
                            break;
                        }
                    } 
                    else if (car.start >= pos + len) {
                        if (car.start - (pos + len) < f) {
                            valid = false;
                            break;
                        }
                    } 
                    else {
                        valid = false;
                        break;
                    }
                }
 
                if (valid) {
                    found_pos = pos;
                    break;
                }
            }
 
            if (found_pos != -1) {
                parked.pb({found_pos, found_pos + len, req_idx});
                car_map[req_idx] = {found_pos, found_pos + len};
                cout << found_pos << "
";
            } 
            else  cout << "-1
";
 
        } 
        else if (type == 2) {
            int leave_id = val;
            if (car_map.count(leave_id)) {
                auto target = car_map[leave_id];
                parked.erase(remove_if(parked.begin(), parked.end(), [&](const car& car) {
                    return car.start == target.first && car.end == target.second && car.id == leave_id;
                }), parked.end());
                car_map.erase(leave_id);
            }
        }
    }
    
 
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