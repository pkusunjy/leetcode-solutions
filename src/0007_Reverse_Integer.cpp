#include "global.hpp"
using namespace std;

class Solution {
public:
    int reverse(int x) {
        bool isNegative = x < 0 ? true : false;
        int64_t lx = abs(x); // INT_MIN
        int64_t res = 0;
        while(lx > 0) {
            res *= 10;
            res += lx % 10;
            lx /= 10;
        }
        if(isNegative) {
            return res > int64_t(INT_MAX) + 1 ? 0 : (-res);
        } else {
            return res > INT_MAX ? 0 : res;
        }
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    int x = 123;
    cout << s.reverse(x) << endl;
    x = -123;
    cout << s.reverse(x) << endl;
    x = 120;
    cout << s.reverse(x) << endl;
    x = INT_MAX;
    cout << s.reverse(x) << endl;
    x = INT_MIN;
    cout << s.reverse(x) << endl;
    return 0;
}