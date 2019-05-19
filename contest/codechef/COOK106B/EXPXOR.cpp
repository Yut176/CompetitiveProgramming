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

void solve() {
  int n; cin >> n;
  vector<int> b(n);
  vector<double> p(n);
  for(int i=0; i<n; i++) cin >> b[i];
  for(int i=0; i<n; i++) cin >> p[i];

  vector<double> x(100, 0.0);
  cerr << endl;
  for(int i=0; i<n; i++) {
    for(int j=0; j<100; j++) {
      long long a = (1 << j);
      if(a > b[i]) break;
      if((a&b[i]) == a) {
        x[j] = (1.0-x[j]) * p[i] + (x[j]) * (1.0-p[i]);
      }
    }
  }
  double ans = 0.0;

  for(int i=0; i<50; i++) ans += (1<<i) * x[i];
  printf("%.10lf\n", ans);

}

int main(void) {
  int t; cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}



// EOF
