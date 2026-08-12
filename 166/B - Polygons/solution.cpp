/*author SungJinWoo18*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
struct Point{
    ll x,y;
    Point() {}
    Point(ll x,ll y):x(x),y(y){}
    Point operator - (const Point& p) const{
        return Point(x-p.x,y-p.y);
    }
};
Point arr[100005],brr[100005];
 
ll crossProduct(Point a,Point b) {
    return a.x*b.y-a.y*b.x;
}
 
ll cross(Point p0,Point p1,Point p2) {
    return crossProduct(p1-p0, p2-p0);
}
 
ll n,m;
 
bool isInsideConvex(Point p){
    if(cross(arr[1],arr[2],p)>=0) return false;
    if(cross(arr[1],arr[n],p)<=0) return false;
    
    ll l=2,r=n,mid;
    while(r-l>1){
        mid=(l+r)/2;
        if(cross(arr[1],arr[mid],p)<0) l=mid;
        else r=mid;
    }
    
    return cross(arr[l],arr[l + 1],p)<0;
}
 
void solve() {
    cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i].x>>arr[i].y;
    cin>>m;
    for(int i=1;i<=m;i++) cin>>brr[i].x>>brr[i].y;
    
    for(int i=1;i<=m;i++) {
        if(!isInsideConvex(brr[i])){
            cout<<"NO
";
            return;
        }
    }
    cout<<"YES
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