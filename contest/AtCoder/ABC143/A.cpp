#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
const long long mod = 1e9+7;
const int dx[4] = {0,1,0,-1};
const int dy[4] = {1,0,-1,0};
const int ddx[4] = {1,1,-1, -1};
const int ddy[4] = {1,-1,-1,1};
//////////////////////////////////

int main() {
    int a, b; cin >> a >> b;
    cout << max(a-2*b, 0) << endl;

    return 0;
}

// EOF
