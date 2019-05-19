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
  
  long long m, k; cin >> m >> k;
  long long l = 2 << m;
  if (m == 0) {
    if (k == 0) cout << "0 0" << endl;
    else cout << -1 << endl;
    return 0;
  }
  if (k == 0) {
    for(int i=0; i<l; i++) {
      cout << i/2 << " ";
    }
    cout << endl;
    return 0;
  }
  if(l/2 <= k || m == 1) {
    cout << -1 << endl;
    return 0;
  }

  for(int i=0; i<l/2; i++) {
    if(i==k) continue;
    cout << i << " ";
  }
  cout << k << " ";
  for(int i=l/2; i<l; i++) {
  if(l-i-1==k) continue;
    cout << l-i-1 << " ";
  }
  cout << k << endl;

  return 0;
}


// EOF
