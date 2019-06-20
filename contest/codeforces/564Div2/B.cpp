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
  vector<pair<int, int>> p(n);

  p[0] = {1, 1};
  int px = 1; int py = 1;
  for(int i=1; i<n; i++) {
    if(i%2 == 1) {
      px++;
    }else{
      py++;
    }
    p[i] = {px, py};
  }
  cout << max(px, py) << endl;
  // 
  for(int i=0; i<n; i++) {
    printf("%d %d\n", p[i].first, p[i].second);
  }

  return 0;
}



// EOF