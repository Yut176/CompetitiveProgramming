#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
const long long mod = 1e9+7;
const int dx[8] = {0,1,0,-1,1,1,-1,-1};
const int dy[8] = {1,0,-1,0,1,-1,1,-1};
//////////////////////////////////

int check(string s) {
    int n = s.size();
    int d = 0;
    int cnt = 0;
    for(int i=0; i<n; i++) {
        if(d <= 0 && s[i] == ')') cnt++;
        
        if(s[i] == '(') d++;
        else if (s[i]== ')') d--;
    }
    return cnt;
}

int main() {
    int n; cin >> n;
    string s; cin >> s;
    if(n%2 == 1) {
        cout << "No" << endl;
        return 0;
    }
    int l = 0;
    int r = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == '(') l++;
        else r++;
    }
    if(l != r) {
        cout << "No" << endl;
        return 0;
    }

    int cnt = check(s);
    string t = "";
    bool f = false;
    for(int i=0; i<n; i++) {
        if(s[i] == ')' && !f) f = true;
        else t += s[i];
    }
    t += ')';

    string tt = "";
    f = false;
    for(int i=n-1; i>=0; i--) {
        if(s[i] == '(' && !f) f = true;
        else tt += s[i];
    }
    tt += '(';
    reverse(all(tt));

    cnt = min(cnt, check(t));
    cnt = min(cnt, check(tt));
    if(cnt == 0) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}



// EOF
