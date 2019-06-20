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
long long mod = 998244353;

int main(void) {
  int n, m; cin >> n >> m;
  vector<int> t(n);
  for(int i=0; i<n; i++) cin >> t[i];

  int sum = 0;
  int cnt = 0;
  vector<int> tnum(101, 0);
  for(int i=0; i<n; i++) {
    sum += t[i];
    if(sum <= m) {
      cout << 0 << " ";
      tnum[t[i]]++;
      continue;
    }
    int tmp = sum;
    int x = 0;
    for(int j=100; j>=1; j--) {
      if(tnum[j] == 0) continue;
      int p = tnum[j];
      int xx = min((tmp - m + j - 1) / j, tnum[j]);
      x += xx;
      tmp -= j * xx;
      if(tmp <= m) break;
    }
    cout << x << " ";
    tnum[t[i]]++;
  }
  cout << endl;


  return 0;
}

// EOF