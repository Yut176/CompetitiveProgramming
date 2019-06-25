#include<bits/stdc++.h>
using namespace std;
// URDL
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
long long mod = 1e9+7;
//
int n, m;
int sz;
vector<vector<int>> d;

int calc(int p, int b) {
  d[0][p] = b;
  for(int i=0; i<n; i++) {
    int x = p;
    if(p%2 == 1) x--;
    else x++;
    if(i%2 == 0) {
      d[i+1][min(p, x)/2] = (d[i][p] | d[i][x]);
    }else{
      d[i+1][min(p, x)/2] = (d[i][p] ^ d[i][x]);
    }
    if(p%2 == 1) p--;
    p /= 2;
  }
  return d[n][0];
}

int main(){
  cin >> n >> m;
  sz = 1 << n;
  d.resize(n+1, vector<int>(sz, -1));
  for(int i=0; i<sz; i++) cin >> d[0][i];
  for(int i=0; i<n; i++) {
    int tmp = 1 << (i+1);
    int k = tmp/2;
    int l = 0;
    for(int j=0; j<sz/k; j+=2) {
      if(i%2 == 0) {
        d[i+1][l] = (d[i][j] | d[i][j+1]);
      }else{
        d[i+1][l] = (d[i][j] ^ d[i][j+1]);
      }
      l++;
    }
  }

  int p, b;
  while(m--) {
    cin >> p >> b;
    p--;
    cout << calc(p, b) << endl;
  }

  return 0;
}

// EOF
