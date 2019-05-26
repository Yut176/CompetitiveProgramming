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
    int n, m; cin >> n >> m;

    vector<int> l(m);
    vector<int> r(m);
    vector<int> g(100100, 0);
    for(int i=0; i<m; i++){
      cin >> l[i] >> r[i];
      g[l[i]]++;
      g[r[i]+1]--;
    }

    for(int i=1; i<=n; i++) {
      g[i] += g[i-1];
    }
    int cnt = 0;
    for(int i=0; i<g.size(); i++){ 
      if(g[i] == m) cnt++;
    }
    cout << cnt << endl;

    return 0;
}



// EOF
