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
  vector<long long> a(n);
  for(int i=0; i<n; i++) scanf("%I64d", &a[i]);

  vector<long long> dd(n+1, 0);
  dd[n-1] = a[n-1];
  for(int i=n-2; i>=0; i--) {
    dd[i] = dd[i+1];
    dd[i] += a[i];
  }
  vector<pair<long long,long long> > p(n-1);
  for(int i=1; i<n; i++) {
    p[i-1].first = dd[i];
    p[i-1].second = i;
  }
  sort(p.begin(), p.end());
  reverse(p.begin(), p.end());
  vector<int> x(n, 0);
  for(int i=0; i<k-1; i++) {
    x[p[i].second]++;
  }

  long long sum = 0;
  long long c = 1;
  for(int i=0; i<n; i++) {
    if(x[i]) c++;
    sum += a[i] * c;
  }

  cout << sum << endl;

  return 0;
}



// EOF