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
  int x,y,z; cin >> x >> y >> z;

  if(x > y+z) {
    cout << '+' << endl;
    return 0;
  }
  if(y > x+z) {
    cout << '-' << endl;
    return 0;
  }
  if(z == 0) {
    if(x > y) {
      cout << '+' << endl;
    }else if(x < y) {
      cout << '-' << endl;
    }else{
      cout << 0 << endl;
    }
    return 0;
  }

  cout << '?' << endl;


  return 0;
}



// EOF