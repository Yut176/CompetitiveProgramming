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

void solve(long long l, long long r, long long g) {
  if(r < g) {
    cout << 0 << endl;
    return;
  }
  long long cnt = r / g - (l - 1)/ g;
  if (cnt == 1 && l <= g && g <= r) {
    cout << 1 << endl;
    return;
  }else if(cnt == 1) {
    cout << 0 << endl;
    return;
  }
  cout << cnt << endl;
}

int main(void) {
  int t; cin >> t;
  while(t--) {
    long long l, r, g; cin >> l >> r >> g;
    solve(l, r, g);
  }

  return 0;
}



// EOF
