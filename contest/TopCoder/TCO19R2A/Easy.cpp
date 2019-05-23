#include<bits/stdc++.h>
using namespace std;
long long int mod = 1e9+7;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

class RulerMaker{
public:
  vector <int> placeStickers(int n){
    int c = n*n / 4;
    if(n*n%4 != 0) c++;
    vector<int> a;
    vector<int> b;
    for(int i=0; i<n/2; i++) {
      a.push_back(i);
    }
    for(int i=0; i<n-n/2; i++) {
      b.push_back((i+1)*a.size());
    }
    if(n%2 != 0) b[b.size()-1]++;

    vector<int> r;
    for(int i=0; i<a.size(); i++) r.push_back(a[i]);
    for(int i=0; i<b.size(); i++) r.push_back(b[i]);

    // map<int, int> tmp;
    // for(int i=0; i<r.size(); i++) {
    //   for(int j=i+1; j<r.size(); j++) tmp[abs(r[i]-r[j])]++;
    // }
    // cerr << c << endl;
    // for(auto i=tmp.begin(); i!=tmp.end(); i++) {
    //   cerr << i->first << " ";
    // }
    // cerr << endl;

    return r;
  }
};

int main(){
  RulerMaker p;
  // for(int i=2; i<=1000; i++) p.placeStickers(i);
  p.placeStickers2(6);
  p.placeStickers2(7);
  p.placeStickers2(8);
  p.placeStickers2(9);

  return 0;
}

// EOF
