#include<bits/stdc++.h>
using namespace std;
// URDL
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
long long mod = 1e9+7;
//

int main(){
  int n; cin >> n;
  vector<long long> a(n);
  for(int i=0; i<n; i++) cin >> a[i];
  if(n < 3) {
    cout << 0 << endl;
    return 0;
  }
  long long sum = accumulate(a.begin(), a.end(), 0LL);
  if(sum % 3 != 0) {
    cout << 0 << endl;
    return 0;
  }
  long long x = sum / 3;
  long long l = 0;
  long long r = 0;
  long long tmp = 0;
  vector<long long> d(n);
  for(int i=0; i<n; i++) {
    tmp += a[i];
    d[i] = tmp;
    if(tmp == x) l++;
    if(tmp == 2*x) r++;
  }
  if(x == 0) {
    if(l < 3) {
      cout << 0 << endl;
    }else{
      long long ans = (l-1)*(l-2) / 2;
      cout << ans << endl;
    }
    return 0;
  }

  vector<long long> rr(n);
  for(int i=1; i<n; i++) {
    rr[n-1-i] = rr[n-i];
    if(d[n-1-i] == 2*x) rr[n-1-i]++;
  }
  long long cnt = 0;
  for(int i=0; i<n; i++) {
    if(d[i] == x) cnt += rr[i+1];
  }
  cout << cnt << endl;

  return 0;
}



// EOF
