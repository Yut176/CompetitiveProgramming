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
  int n, k; cin >> n >> k;
  double ans = 0.0;
  for(int i=1; i<=n; i++) {
    int x = i;
    int cnt = 1;
    while(x < k) {
      x *= 2;
      cnt *= 2;
    }
    ans += 1.0/(cnt*n);
  }

  printf("%.10lf\n", ans);

  return 0;
}



// EOF
