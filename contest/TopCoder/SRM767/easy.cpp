#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
const long long mod = 1e9+7;
const int dx[4] = {0,1,0,-1};
const int dy[4] = {1,0,-1,0};
const int ddx[4] = {1,1,-1, -1};
const int ddy[4] = {1,-1,-1,1};
//////////////////////////////////

string ans[3] = {"Yes", "No", "Not Sure"};
class ArpaAsDevotee {
    public:
    vector <string> solve(int n, int q, vector <int> a, vector <int> lastSeen, vector <int> t) {
        for(int i=0; i<n; i++) {
            if(a[i] < lastSeen[i]) return {"1"};
        }
        vector<int> x(86401, -1);
        vector<int> y(86401, 0);
        vector<int> aa(86401, 2);
        for(int i=0; i<n; i++) {
            y[lastSeen[i]] = 1;
            aa[lastSeen[i]] = 0;
            if(x[a[i]] == -1) x[a[i]] = lastSeen[i];
            else {
                if(x[a[i]] != lastSeen[i]) return {"2"};
            }
        }

        vector<pair<int, int>> p;
        vector<pair<int, int>> pp(n);
        for(int i=0; i<n; i++) {
            pp[i] = {a[i], lastSeen[i]};
        }
        sort(all(pp));
        pp.push_back({-1, -1});
        for(int i=0; i<n; i++) {
            if(pp[i] == pp[i+1]) continue;
            p.push_back(pp[i]);
        }
        n = p.size();
        //for(int i=0; i<n; i++) cerr << p[i].first << " " << p[i].second << endl;
        for(int i=0; i<n; i++) {
            for(int j=p[i].second+1; j<p[i].first; j++) aa[j] = 1;
        }
        p.push_back({-1, -1});
        for(int i=0; i<n; i++) {
            if(aa[p[i].second] == 1) return {"3"};
            if(p[i].second == p[i+1].second) {
                for(int j=p[i].second+1; j<p[i+1].first; j++) {
                    aa[j] = 1;
                }
            }
        }

        vector<string> ret(t.size(), ans[2]);
        for(int i=0; i<q; i++) {
            ret[i] = ans[aa[t[i]]];
        }

        return ret;
    }
};


ArpaAsDevotee p;
void test(int n, int q, vector <int> a, vector <int> lastSeen, vector <int> t) {
    vector<string> ans = p.solve(n, q, a, lastSeen, t);
    if(ans.size() == 0) {
        cerr << "{}" << endl;
        return;
    }
    for(int i=0; i<ans.size(); i++) cerr << ans[i] << ", ";
    cerr << endl;
}

int main() {
    test(5, 7, {11, 13, 17, 25, 29},{11, 13, 15, 15, 29},{11, 12, 13, 14, 15, 16, 17});
    // y ? y ? y n n
    test(2, 1, {1, 10}, {5, 3}, {6});
    // {}
    test(3, 1, {7,7,1}, {3,5,1}, {4});
    // {}
    test(2, 3, {5, 5}, {2,2}, {1,2,3});
    // ? y n
    test(5, 8, {11, 13, 17, 25, 29},{11, 13, 15, 15, 15},{11, 12, 13, 14, 15, 16, 17, 24});
    test(3, 7, {17, 25, 29},{15, 15, 16},{11, 12, 13, 14, 15, 16, 17});
    test(3, 1, {17, 25, 29},{15, 15, 16},{11});
    // {}
    return 0;
}

// EOF
