#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> b(n);
  for(int i=0; i<n; i++) cin >> b[i];
  map<int, int> a;
  for(int i=0; i<n; i++) a[b[i]] = i+1;
  sort(b.begin(), b.end());

  int ds = b[2]-b[1];
  bool f = true;
  for(int i=1; i<n-1; i++) {
    if(ds != b[i+1] - b[i]) {
      f = false;
      break;
    }
  }
  if (f) {
    cout << a[b[0]] << endl;
    return 0;
  }

  f = true;
  int dl = b[n-2] - b[n-3];
  for(int i=0; i<n-2; i++) {
    if(dl != b[i+1]-b[i]) {
      f = false;
      break;
    }
  }
  if(f) {
    cout << a[b[n-1]] << endl;
    return 0;
  }

  if((b[n-1]-b[0])%(n-2) != 0) {
    cout << -1 << endl;
    return 0;
  }
  int d = (b[n-1] - b[0]) / (n-2);
  int p = -1;
  int cnt = 0;
  for(int i=0; i<n-1; i++) {
    int dd = b[i+1] - b[i];
    if(dd != d) {
      p = i;
      cnt++;
    }
  }
  if(cnt == 2 || cnt == 1) {
    cout << a[b[p]] << endl;
    return 0;
  }

  cout << -1 << endl;

  return 0;
}



// EOF