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

vector<int> p;
vector< vector<int> > s;
int n, m; 

bool func(int a) {
  vector<bool> f(10, false);
  for(int i=0; i<10; i++) {
    int q = (1 << i);
    if((q&a) == q) {
      f[i] = true;
    }else{
      f[i] = false;
    }
  }

  for(int i=0; i<m; i++) {
    int cnt = 0;
    for(int j=0; j<s[i].size(); j++) {
      if(f[s[i][j]]) {
        cnt++;
      }
    }
    if(cnt%2 != p[i]) return false;
  }
  return true;
}

int main(void) {
  cin >> n >> m;
  p.resize(m);
  s.resize(m);

  long long ans = 0;
  for(int i=0; i<m; i++) {
    int k; cin >> k;
    vector<int> ss(k);
    for(int j=0; j<k; j++){
      cin >> ss[j];
      ss[j]--;
    }
    s[i] = ss;
  }

  for(int i=0; i<m; i++) cin >> p[i];

  for(int i=0; i<(1<<n); i++) {
    ans += func(i);
  }

  cout << ans << endl;
  
  return 0;
}



// EOF
