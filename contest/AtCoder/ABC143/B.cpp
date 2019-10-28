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
    int n; cin >> n;
    vector<int> d(n);
    for(int i=0; i<n; i++) cin >> d[i];
    int sum = 0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            sum += d[i] * d[j];
        }
    }
    cout << sum << endl;


    return 0;
}

// EOF
