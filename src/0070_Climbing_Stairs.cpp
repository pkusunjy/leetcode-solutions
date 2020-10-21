#include "global.hpp"
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1 || n == 2)  return n;
        int a = 1;
        int b = 2;
        int res = 0;
        for (int i = 3; i <= n; i++) {
            res = a + b;
            a = b;
            b = res;
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    for (int i = 1; i < 45; i++) {
        cout << s.climbStairs(i) << endl;
    }
    return 0;
}
