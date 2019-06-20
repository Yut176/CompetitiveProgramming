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
  int l; cin >> l;
  string s; long long n;
  long long cnt = 0;
  stack<pair<long long, long long>> q;
  bool of = false;
  while(l--) {
    cin >> s;
    if(s == "for") cin >> n;
    if(of) continue;
    if(cnt >= (1LL << 32)) {
      of = true;
    }

    if(q.empty() && s == "add") cnt++; 
    else if(s == "add") {
      auto a = q.top();
      a.second++;
      if(a.second * a.first >= (1LL << 32)) {
        of =true;
      }
      q.pop();
      q.push(a);
    }

    if(s == "end") {
      if(q.empty()) continue;
      auto a = q.top();
      q.pop();
      if(q.empty()) cnt += a.first * a.second;
      else{
        auto b = q.top();
        q.pop();
        b.second += a.first * a.second;
        if(b.second >= (1LL << 32)) {
          of =true;
        }
        q.push(b);
      }
    }
    if(s == "for") {
      q.push({n, 0});
    }
    // cerr << cnt << endl;
  }
  if(cnt >= (1LL << 32) || of) {
    cout << "OVERFLOW!!!" << endl;
    return 0;
  }
  cout << cnt << endl;

  return 0;
}



// EOF