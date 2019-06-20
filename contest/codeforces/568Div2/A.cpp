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
  vector<int> a(3);
  int d; cin >> a[0] >> a[1] >> a[2] >> d;
  sort(a.begin(), a.end());
  a[0] -= a[1];
  a[2] -= a[1];
  a[1] -= a[1];
  cout << max(0, d-abs(a[0])) + max(0, d-a[2]) << endl;

  return 0;
}

// EOF