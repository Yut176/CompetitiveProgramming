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
  vector<int> a(2*n);
  for(int i=0; i<2*n; i++) cin >> a[i];
  sort(a.begin(), a.end());
  long long sum1 = 0;
  long long sum2 = 0;
  for(int i=0; i<n; i++) sum1 += a[i];
  for(int i=n; i<2*n; i++) sum2 += a[i];
  if(sum1 == sum2) {
    cout << -1 << endl;
  }else {
    for(int i=0; i<2*n; i++) cout << a[i] << " ";
    cout << endl;
  }

  return 0;
}



// EOF
