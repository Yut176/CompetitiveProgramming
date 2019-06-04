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
void func(vector<int> a) {
  for(int i=0; i<a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main(void) {

  int n; cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++) cin >> a[i];
  int odd = 0;
  int even = 0;
  for(int i=0; i<n; i++) {
    if(a[i]%2==0) even++;
    else odd++;
  }
  vector<int> b = a;
  sort(b.begin(), b.end());
  if(a == b) {
    func(a);
    return 0;
  }
  if(odd == 0 || even == 0) {
    func(a);
  }else{
    func(b);
  }



  return 0;
}



// EOF
