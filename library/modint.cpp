#include<iostream>
using namespace std;
// WIP
template<int mod> class mint {
private:
    int _x;
    mint set(int x) { _x = x % mod; return *this; }
public:
    mint() { _x = 0; }
    mint(int x) { _x = x % mod; }
    mint operator= (int x) { _x = x % mod; return *this; }
    mint operator+ (int x) { return mint(*this) += x; }
    mint operator- (int x) { return mint(*this) -= x; }
    mint operator* (int x) { return mint(*this) *= x; }
    mint operator/ (int x) { return mint(*this) /= x; }
    mint &operator+=(int x) noexcept { 
        _x += x;
        if (_x >= mod) _x -= mod;
        return *this;
    }
    mint &operator-=(int x) { 
        if (_x < x) _x += mod;
        _x -= x;
        return *this;
    }
    mint &operator*=(int x) { return _x = _x * (x % mod); }
    mint &operator/=(int x) {
        int m = mod - 2;
        while(m) {
            if(m%2) *this *= x;
            x *= x;m /= 2;
        }
        return *this;
    }
    explicit operator int() { return _x; }
    friend ostream& operator<<(ostream &os, const mint<mod> &x) {
        os << x._x; return os;
    }
};



int main () {

    mint<11> x = 1;
    for(int i=0; i<10; i++) {
        x += 4;
        cerr << x << endl;
    }

    return 0;
}