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
  long long t; cin >> t;
  long long n, k;
  while(t--) {
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);

    int tmp = a[k]-a[0];
    int p = 0;
    for(int i=0; i<n-k; i++) {
      if(tmp > a[i+k]-a[i]) {
        tmp = a[i+k]-a[i];
        p = i;
      }
    }
    cout << (a[p+k]+a[p])/2 << endl;
  }

  return 0;
}



// EOF