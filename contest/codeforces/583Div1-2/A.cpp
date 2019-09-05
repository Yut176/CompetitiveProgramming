#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
const long long mod = 1e9+7;
const int dx[8] = {0,1,0,-1,1,1,-1,-1};
const int dy[8] = {1,0,-1,0,1,-1,1,-1};
//////////////////////////////////


int main() {
    int n, d, e; cin >> n >> d >> e;
    e *= 5;

    int ans = n;
    for(int i=0; i<=n; i+=d) {
        ans = min(ans, (n-i)%e);
    }
    for(int i=0; i<=n; i+=e) {
        ans = min(ans, (n-i)%d);
    }
    cout << ans << endl;

    return 0;
}




// EOF
