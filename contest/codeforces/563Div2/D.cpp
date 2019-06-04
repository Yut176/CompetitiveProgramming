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
void func(vector<int> a) {
  for(int i=0; i<a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
int main(void) {

  int n; cin >> n;
  int x; cin >> x;
  int p = 1 << n;
  int f = 0;
  if(p <= x) {
    f = 1;
  }
  if(n == 1 && x == 1) {
    cout << 0 << endl;
    return 0;
  }

  vector<int> a;
  a.push_back(0);
  for(int i=1; i<n-1+f; i++) {
    vector<int> b = a;
    a.push_back(i);
    for(int j=0; j<b.size(); j++) a.push_back(b[j]);
  }

  int diff = 0;
  if(f == 0) {
    for(int i=0; ; i++) {
      int pp = 1 << i;
      if((pp&x) == pp) {
        diff = i+1;
        break;
      }
    }
  }

  int y = *max_element(a.begin(), a.end()) + 2;
  for(int i=0; i<a.size(); i++) {
    a[i] = (a[i]+diff)%(y);
  }

  for(int i=0; i<a.size(); i++) {
    a[i] = 1 << a[i];
  }

  cout << a.size() << endl;
  func(a);

  return 0;
}



// EOF
