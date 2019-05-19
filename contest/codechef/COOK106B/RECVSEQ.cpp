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
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vector<int> d(n, 0);
    map<int, int> mp;
    for(int i=0; i<n-1; i++) {
      d[i] = a[i+1]-a[i];
      mp[d[i]]++;
    }

    for(auto i=mp.begin(); i!=mp.end(); i++) {
      cerr << i->first << endl;
      vector<int> b(n, 0);
      vector<int> c(n, 0);
      b[0] = a[0];
      c[n-1] = a[n-1];
      for(int j=1; j<n; j++) {
        b[j] = b[j-1] + i->first;
      }
      int cnt = 0;
      for(int j=0; j<n; j++) {
        if(a[j] != b[j]) cnt++;
      }
      if(cnt == 0 || cnt == 1) {
        for(int j=0; j<n-1; j++) {
          cout << b[j] << " ";
        }
        cout << b[n-1] << endl;
        break;
      }

      for(int j=n-2; j>=0; j--) {
        c[j] = c[j+1] - i->first;
      }
      int cnt2 = 0;
      for(int j=0; j<n; j++) {
        if(a[j] != c[j]) cnt2++;
      }
      if(cnt2 == 0 || cnt2 == 1) {
        for(int j=0; j<n-1; j++) {
          cout << c[j] << " ";
        }
        cout << c[n-1] << endl;
        break;
      }

    }

  }

  return 0;
}



// EOF
