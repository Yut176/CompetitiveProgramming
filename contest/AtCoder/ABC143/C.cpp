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
    string s; cin >> s;
    int cnt = 0;
    s += " ";
    for(int i=0; i<n; i++) {
        if(s[i] != s[i+1]) {
            cnt++;
        }
    }
    cout << cnt << endl;


    return 0;
}

// EOF
