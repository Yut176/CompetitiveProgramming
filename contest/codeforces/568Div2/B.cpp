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

bool solve(string s, string t) {
  if(s == t) return true;
  vector<int> a;
  vector<char> aa;
  a.push_back(1);
  aa.push_back(s[0]);
  for(int i=1; i<s.size(); i++) {
    if(s[i] == s[i-1]) {
      a[a.size()-1]++;
    }else{
      a.push_back(1);
      aa.push_back(s[i]);
    }
  }

  vector<int> b;
  vector<char> bb;
  b.push_back(1);
  bb.push_back(t[0]);
  for(int i=1; i<t.size(); i++) {
    if(t[i] == t[i-1]) {
      b[b.size()-1]++;
    }else{
      b.push_back(1);
      bb.push_back(t[i]);
    }
  }

  if(a.size() != b.size()) return false;

  for(int i=0; i<a.size(); i++) {
    if(bb[i] != aa[i]) return false;
    if(a[i] > b[i]) return false;
  }
  return true;
}


int main(void) {
  int n; cin >> n;
  string s, t;
  for(int i=0; i<n; i++) {
    cin >> s >> t;
    cout << (solve(s, t)? "YES": "NO") << endl;
  }

  return 0;
}

// EOF