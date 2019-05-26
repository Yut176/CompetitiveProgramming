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

  int n, k; cin >> n >> k;
  vector<long long > v(n);
  for(int i=0; i<n; i++) cin >> v[i];
  long long ans = 0;
  for(int g=0; g<=k; g++) {
    int p = k - g;
    if(p > n) continue;
    for(int l=0; l<=p; l++) {
      for(int r=0; r<=p; r++) {
        if(r + l > p) break;
        if(r + l >= n) r = n-l;
        priority_queue<long long> q;
        for(int i=0; i<l; i++) q.push(-v[i]);
        for(int i=0; i<r; i++) q.push(-v[n-i-1]);
        for(int i=0; i<g; i++) {
          if(q.empty()) break; 
          if(q.top() < 0) break;
          q.pop();
        }
        long long tmp = 0;
        while(!q.empty()) {
          tmp -= q.top();
          q.pop();
        }
        ans = max(ans, tmp);
      }
    }
  }
  cout << ans << endl;  
  return 0;
}



// EOF
