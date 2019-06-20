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
  int n; cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for(int i=0; i<n; i++) {
    scanf("%d", &a[i]);
    if(a[i] == 0) a[i] = 1e9;
  }
  for(int i=0; i<n; i++) {
    scanf("%d", &b[i]);
    if(b[i] == 0) b[i] = 1e9;
  }

  vector<int> c = b;
  sort(a.begin(), a.end());
  sort(c.begin(), c.end());
  if(c == b && a[0] == 1e9) {
    cout << 0 << endl;
    return 0;
  }

  priority_queue<int> pq;
  for(int i=0; i<n; i++) pq.push(-a[i]);
  int ccnt = 1e9;

  // 
  int p = -1;
  for(int i=0; i<n; i++) {
    if(b[i] == 1) {
      p = i;
      break;
    }
  }
  if(p != -1) {
    bool f = true;
    for(int i=p; i<n-1; i++) {
      if(b[i]+1 != b[i+1]) f = false;
    }
    if(f) {
      int last = b[n-1];
      int pp = -1;
      for(int i=0; i<n; i++) {
        if(a[i] == last+1) {
          pp = i;
          break;
        }
      }
      if(pp != -1) {
        ccnt = 0;
        int y = last + 1;
        priority_queue<int> ppq = pq;
        for(int i=0; i<n; i++) {
          if(ppq.top() == -y) {
            y++;
            ppq.pop();
          } else{
            ccnt = 1e9;
            break;
          }
          ppq.push(-b[i]);
          ccnt++;
          if(y == n+1) break;
        }
      }
    }
  }

  int cnt = 0;
  int x = 1;
  for(int i=0; i<n; i++) {
    // cerr << "top " << pq.top() << endl;
    if(pq.top() == -x) {
      // cerr << "pop" << endl;
      x++;
      pq.pop();
    }
    pq.push(-b[i]);
    cnt++;
    if(x == n+1) break;
  }
  while(!pq.empty()){
    if(pq.top() == -1e9) break;
    pq.pop();
    cnt++;    
  } 
  cout << min(cnt, ccnt) << endl;

  return 0;
}

// EOF