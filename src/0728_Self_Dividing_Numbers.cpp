#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int num = left; num <= right; num++) {
            int tmp = num;
            bool isTarget = true;
            while (tmp > 0) {
                int divisor = tmp % 10;
                if (divisor == 0 || num % divisor != 0) {
                    isTarget = false;
                    break;
                }
                tmp /= 10;
            }
            if (isTarget) {
                res.push_back(num);
            }
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> res = s.selfDividingNumbers(1, 22);
    for (const int& i : res) {
        cout << i << endl;
    }
    return 0;
}
