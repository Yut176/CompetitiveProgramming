#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
using namespace std;

int main(void) {
  int t; cin >> t;
  while(t--) {
    int r, c; cin >> r >> c;
    vector< vector<int> > v(r, vector<int>(c));
    bool f = true;
    for(int i=0; i<r; i++) {
      for(int j=0; j<c; j++) {
        cin >> v[i][j];
        int tmp = 4;
        if(i == 0 || i == r-1) tmp--;
        if(j == 0 || j == c-1) tmp--;
        if(v[i][j] < tmp) continue;
        f = false;
      }
    }
    if(f) cout << "Stable" << endl;
    else cout << "Unstable" << endl;

  }

  return 0;
}



// EOF
