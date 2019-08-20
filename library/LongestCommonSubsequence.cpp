#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
const long long mod = 1e9+7;
const int dx[4] = {0,1,0,-1};
const int dy[4] = {1,0,-1,0};
//////////////////////////////////

// O(s*t)
int LongestCommonSubsequenceLength(string s, string t) {
    int n = s.size(); 
    int m = t.size();
    vector<vector<int>> x(n+1, vector<int>(m+1));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(s[i] == t[j]) {
                x[i+1][j+1] = x[i][j] + 1;
            } else {
                x[i+1][j+1] = max(x[i][j+1], x[i+1][j]);
            }
        }
    }
    return x[n][m];
}

// O(s*t)
string LongestCommonSubsequence(string s, string t) {
    int n = s.size(); 
    int m = t.size();
    vector<vector<int>> x(n+1, vector<int>(m+1));
    vector<vector<int>> y(n+1, vector<int>(m+1));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(s[i] == t[j]) {
                x[i+1][j+1] = x[i][j] + 1;
                y[i+1][j+1] = 0;
            } else if (x[i+1][j] < x[i][j+1]) {
                x[i+1][j+1] = x[i][j+1];
                y[i+1][j+1]++;
            } else {
                x[i+1][j+1] = x[i+1][j];
                y[i+1][j+1]--;
            }
        }
    }

    string ret = "";
    for(int i=n, j=m; i>0 && j > 0;) {
        if(y[i][j] > 0) i--;
        else if(y[i][j] < 0) j--;
        else {
            ret += s[i-1];
            i--; j--;
        }
    }
    reverse(ret.begin(), ret.end());
    return ret;
}

int main() {
    string s, t; cin >> s >> t;
    cout << LongestCommonSubsequence(s, t) << endl;

    return 0;
}




// EOF
