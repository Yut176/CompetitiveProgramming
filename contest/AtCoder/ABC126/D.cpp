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
  int n; cin >> n;
  vector<int> u(n-1);
  vector<int> v(n-1);
  vector<int> w(n-1);
  vector< vector<pair<int, int> > > x(n); 
  for(int i=0; i<n-1; i++) {
    cin >> u[i] >> v[i] >> w[i];
    u[i]--; v[i]--;
    w[i] %= 2;
    x[u[i]].push_back({v[i], w[i]});
    x[v[i]].push_back({u[i], w[i]});
  }

  vector<int> a(n, -1);
  a[0] = 0;
  queue<int> q;
  q.push(0);
  while(!q.empty()) {
    int p = q.front();
    q.pop();

    for(int i=0; i<x[p].size(); i++) {
      if(a[x[p][i].first] != -1) continue;

      if(x[p][i].second == 0){
        a[x[p][i].first] = a[p];
      }
      else {
        if(a[p] == 0) a[x[p][i].first] = 1;
        else a[x[p][i].first] = 0;
      }

      q.push(x[p][i].first);
    }
  }

  for(int i=0; i<n; i++) {
    cout << a[i] << endl;
  }

  return 0;
}



// EOF
