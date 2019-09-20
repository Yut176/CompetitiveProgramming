#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
const long long mod = 1e9+7;
const int dx[4] = {0,1,0,-1};
const int dy[4] = {1,0,-1,0};
const int ddx[4] = {1,1,-1, -1};
const int ddy[4] = {1,-1,-1,1};
//////////////////////////////////

class MahdiJumping {
    public:
    long long minDis(int n, int A, int B, int a, int b) {
        vector<long long> cost(n, 1e18);
        cost[0] = 0;
        priority_queue<pair<long long, long long>> pq;
        pq.push({-cost[0], 0});
        while(!pq.empty()) {
            auto x = pq.top();
            long long c = -x.first;
            if(x.second == n-1) break;
            pq.pop();

            int p = ((A * x.second)%n + B)%n;
            if (cost[p] > c + b) {
                cost[p] = c + b;
                pq.push({-cost[p], p});            
            }
            
            if(cost[x.second+1] > c + a) {
                cost[x.second+1] = c + a;
                pq.push({-cost[x.second+1], x.second+1});
            }
        }


        // for(int i=0; i<n; i++) cerr << cost[i] << " ";
        // cerr << endl;
        return cost[n-1];
    }
};


MahdiJumping p;

int main() {
    cerr << endl << p.minDis(7, 1, 1, 1, 5);
    cerr << endl << p.minDis(5,2,2,1,2);
    cerr << endl << p.minDis(5,5,5,5,5);
    cerr << endl;
    // {}
    return 0;
}

// EOF
