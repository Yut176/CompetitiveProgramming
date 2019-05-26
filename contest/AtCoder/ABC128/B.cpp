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
long long mod = 1e9 + 7;

int main(void) {
  int n; cin >> n;
  vector<pair<pair<string, int> , int>> p(n);
  for(int i=0; i<n; i++) {
    cin >> p[i].first.first >> p[i].first.second;
    p[i].first.second *= -1;
    p[i].second = i+1;
  }
  sort(p.begin(), p.end());
  cerr << endl;
  for(int i=0; i<n; i++) {
    cout << p[i].second << endl;
  }

  return 0;
}



// EOF
