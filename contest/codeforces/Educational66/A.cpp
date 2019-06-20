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
  int t; cin >> t;
  while(t--) {
    long long n, k; cin >> n >> k;
    long long cnt = 0;
    while(n) {
      if(n % k == 0) {
        n /= k;
        cnt++;
      }else{
        long long tmp = n%k;
        n -= tmp;
        cnt += tmp;
      }
    }
    
    cout << cnt << endl;
  }


  return 0;
}



// EOF