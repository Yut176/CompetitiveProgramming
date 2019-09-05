#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
const long long mod = 1e9+7;
const int dx[8] = {0,1,0,-1,1,1,-1,-1};
const int dy[8] = {1,0,-1,0,1,-1,1,-1};
//////////////////////////////////


int main() {
    int b, g, n; cin >> b >> g >> n;
    cout << n + 1 - max(0, n-g) - max(0, n-b) << endl;

    return 0;
}



// EOF
