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
int n, m; 

bool func(int k, vector<int> a) {
  int b = 0;
  for(int i=0; i<n; i++) {

    if(a[i] < b && a[i]+k < b) return false;
    if(a[i] <= b) continue;
    if(k > m) continue;
    if(a[i]+k >= m && b <= (a[i]+k)%m) continue;

    b = a[i];
  }

  return true;
}

int main(void) {
  cin >> n >> m;
  vector<int> a(n);
  for(int i=0; i<n; i++) scanf("%d", &a[i]);

  int l = 0; int r = m;
  int m = (l+r)/2;
  int lp = 0;
  while(true) {
    lp++;
    if(func(m, a)) {
      r = m;
    }else{
      l = m;
    }
    m = (l+r)/2;
    if(lp > 100) break;
  }
  for(int i=l; ; i++) {
    if(func(i, a)) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}



// EOF
