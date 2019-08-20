#include<bits/stdc++.h>
using namespace std;
//////////////////////////////////

vector<pair<char, int>> RunLengthEncoding(string data) {
    int n = data.size();
    vector<pair<char, int>> ret;
    char c = data[0];
    int num = 1;
    for(int i=1; i<n; i++) {
        if(data[i] == c) {
            num++;
        }else{
            ret.push_back({c, num});
            c = data[i];
            num = 1;
        }
    }
    ret.push_back({c, num});
    // for(int i=0; i<ret.size(); i++) {
    //     cerr << ret[i].first << " " << ret[i].second << endl;
    // }
    return ret;
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    RunLengthEncoding(s);
    // s = aaabbabb
    // a 3
    // b 2
    // a 1
    // b 2

    return 0;
}




// EOF
