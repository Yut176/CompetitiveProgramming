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

  vector<int> tmp;
  int sum = 0;
  int cnt = 0;
  for(int i=0; i<n; i++) {
    sum += t[i];
    if(sum <= m) {
      cout << 0 << " ";
    }else{
      sort(tmp.begin(), tmp.end());
      int ss = sum;
      for(int i=0; i<n; i++) {
        ss -= tmp[tmp.size()-1-i];
        if(ss <= m) {
          cout << i+1 << " ";
          break;
        }
      }
    }
    tmp.push_back(t[i]);
  }
  cout << endl;

  return 0;
}

// EOF