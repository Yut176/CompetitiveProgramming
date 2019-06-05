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

  int n, m; cin >> n >> m;
  vector<int> a(m);
  vector<int> b(m);
  map<int, int> mp;
  for(int i=0; i<m; i++) {
    scanf("%d %d", &a[i], &b[i]);
    mp[a[i]]++;
    mp[b[i]]++;
  }

  int l = a[0];
  map<int, int> c;
  int cc = 0;
  for(int i=0; i<m; i++) {
    if(l == a[i] || l == b[i]) continue;
    cc++;
    c[a[i]]++;
    c[b[i]]++;
  }

  int r = b[0];
  map<int, int> d;
  int dd = 0;
  for(int i=0; i<m; i++) {
    if(r == a[i] || r == b[i]) continue;
    d[a[i]]++;
    d[b[i]]++;
    dd++;
  }
  if(cc == 0 || dd == 0) {
    cout << "YES" << endl;
    return 0;
  }
  for(auto i=c.begin(); i!=c.end(); i++) {
    if(cc == i->second) {
      cout << "YES" << endl;
      return 0;
    }
  }
  for(auto i=d.begin(); i!=d.end(); i++) {
    if(dd == i->second) {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
  
  



  return 0;
}



// EOF
