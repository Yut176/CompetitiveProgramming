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
    vector<long long > a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<long long >());
    vector<long long > b(m);
    vector<long long > c(m);
    vector< pair<long long , long long > > p(m);
    for(int i=0; i<m; i++) {
      cin >> b[i] >> c[i];
      p[i].first = -c[i];
      p[i].second = -b[i];
    }
    long long int sum = 0;
    sort(p.begin(), p.end());

    int x = 0;
    int pp = 0;
    int aa = 0;
    while(true) {
      if(x >= n) break;
      // cerr << -p[pp].first << " " << a[aa] << endl;
      if(-p[pp].first > a[aa]) {
        for(int i=0; i< -p[pp].second; i++) {
          x++;
          sum += -p[pp].first;
          if(x >= n) break;
        }
        pp++;
      }else if(-p[pp].first == a[aa]) {
        for(int i=0; i<= -p[pp].second; i++) {
          x++;
          sum += -p[pp].first;
          if(x >= n) break;
        }
        pp++;
        aa++;
      }else {
        x++;
        sum += a[aa];
        aa++;
      }
      // cerr << sum << endl;
    }
    
    cout << sum << endl;

    return 0;
}



// EOF
