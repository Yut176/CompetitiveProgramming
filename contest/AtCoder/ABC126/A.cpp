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

  int n, k; cin >> n >> k;
  string s; cin >> s;
  char c = s[k-1];
  s[k-1] = c - 'A' + 'a';
  cout << s << endl;


  return 0;
}



// EOF
