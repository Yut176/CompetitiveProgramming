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

  int n, a, x, b, y; cin >> n >> a >> x >> b >> y;
  if(a == b) {
    cout << "YES" << endl;
    return 0;
  }
  for(int i=0; i<n; i++) {
    a++;
    b--;
    a %= n;
    if(b < 0) b = n-1;
    if(a == b){
      cout << "YES" << endl;
      return 0;
    }
    if(a == x || b == y) break;
  }
  cout << "NO" << endl;

  return 0;
}



// EOF
