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
    int n, a; cin >> n;
    vector<pair<int, int>> p(n);
    for(int i=0; i<n; i++) {
        cin >> a;
        p[i].first = a;
        p[i].second = i+1;
    }
    sort(all(p));
    for(int i=0; i<n; i++) cout << p[i].second << " ";
    cout << endl;

    return 0;
}

// EOF
