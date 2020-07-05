#include "global.hpp"
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int res = 0;
        for(int i = 0; i < n; i++) {
            res ^= (start + 2 * i);
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.xorOperation(5, 0) << endl;
    cout << s.xorOperation(4, 3) << endl;
    cout << s.xorOperation(1, 7) << endl;
    cout << s.xorOperation(10, 5) << endl;
    return 0;
}