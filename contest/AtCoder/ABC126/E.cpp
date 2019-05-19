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

class UnionFind {
public:
  vector<int> parent;
  vector<int> sizes;
  UnionFind(int n) : parent(n), sizes(n, 1) {
    for(int i=0; i<n; i++) parent[i] = i;
  }
  int find(int x) {
    if (x == parent[x]) return x;
    return parent[x] = find(parent[x]);
  }
  void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if(x == y) return;
    if(sizes[x] < sizes[y]) swap(x, y);
    parent[y] = x;
    sizes[x] += sizes[y];
  }
  bool same(int x, int y) { return find(x) == find(y); }
  int size(int x) { return sizes[find(x)]; }
};

int main(void) {

  int n, m; cin >> n >> m;
  vector<int> x(m);
  vector<int> y(m);
  vector<int> z(m);
  UnionFind uf(n);
  for(int i=0; i<m; i++) {
    cin >> x[i] >> y[i] >> z[i];
    x[i]--;
    y[i]--;
    z[i] %= 2;
    uf.unite(x[i], y[i]);
  }

  map<int, int> mp;
  for(int i=0; i<n; i++){
    mp[uf.find(i)]++;
  }
  cout << mp.size() << endl;

  

  return 0;
}



// EOF
