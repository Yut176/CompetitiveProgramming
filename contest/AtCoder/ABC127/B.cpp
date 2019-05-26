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

int main(void) {

    int r, d, x; cin >> r >> d >> x;
    for(int i=0; i<10; i++) {
      x = x * r - d;
      cout << x << endl;
    }

    return 0;
}



// EOF
