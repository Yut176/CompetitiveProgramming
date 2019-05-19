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

  string s; cin >> s;
  bool a = false;
  if ('0' == s[0] && '1' <= s[1] && s[1] <= '9') {
    a = true;
  }else if('1' == s[0] && '0' <= s[1] && s[1] <= '2') {
    a = true;
  }
  bool b = false;
  if ('0' == s[2] && '1' <= s[3] && s[3] <= '9') {
    b = true;
  }else if('1' == s[2] && '0' <= s[3] && s[3] <= '2') {
    b = true;
  }

  if(a & !b) {
    cout << "MMYY" << endl;
  }else if(!a & b) {
    cout << "YYMM" << endl;
  }else if(a && b) {
    cout << "AMBIGUOUS" << endl;
  }else {
    cout << "NA" << endl;
  }


  return 0;
}



// EOF
