#include "global.hpp"
using namespace std;

class Solution {
public:
    int numberOfSteps (int num) {
        int res = 0;
        while (num > 0) {
            if (num & 0x1)  num--;
            else num >>= 1;
            res++;
        }
        return res;
    }
};

int main() {
    Solution s;
    cout << s.numberOfSteps(14) << endl;
    return 0;
}
