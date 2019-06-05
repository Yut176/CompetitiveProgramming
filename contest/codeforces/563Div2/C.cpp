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
  for(int i=2; i<a.size(); i++) {
    cerr << i << " " << a[i] << " " << endl;
    // cout << a[i] << " ";
  }
  cout << endl;
}
vector<int> isPrime(long long int n){
  vector<int> prime(n+1, 0);
  prime[0] = false;
  prime[1] = false;
  int l = 1;
  for(long long int i=2; i<=sqrt(n); i++){
    if( prime[i] != 0 ) continue;
    for(long long int j=i; j<=n; j+=i){
      if(prime[j] == 0 ) prime[j] = l;
    }
    l++;
  }

  for(int i=2; i<=n; i++) {
    if(prime[i] == 0) {
      cout << l << " ";
      l++;
    }else{
      cout << prime[i] << " ";
    }
  }
  cout << endl;

  return prime;
}
int main(void) {

  int n; cin >> n;
  vector<int> p = isPrime(n);




  return 0;
}



// EOF
