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
  int n; cin >> n;
  vector<long long> u(n-1);
  vector<long long> v(n-1);
  vector< vector<long long> > a(n, vector<long long>());
  for(int i=0; i<n-1; i++){
    cin >> u[i] >> v[i];
    u[i]--; v[i]--;
    a[u[i]].push_back(v[i]);
    a[v[i]].push_back(u[i]);
  }

  long long cnt = 1;
  queue<long long> q;
  vector<bool> vis(n, false);
  q.push(0);
  while(!q.empty()) {
    long long x = q.front();
    q.pop();
    vis[x] = true;
    long long tmp = a[x].size();
    while(tmp != 1) {
      cnt *= tmp;
      cnt %= mod;
      tmp--;
    }
    for(int i=0; i<a[x].size(); i++) {
      if(vis[a[x][i]]) continue;
      q.push(a[x][i]);
    }
  }

  cnt *= n;
  cnt %= mod;

  cout << cnt << endl;

  return 0;
}

// EOF