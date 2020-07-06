#include "global.hpp"
using namespace std;

class Solution {
public:
    int getSquareSum(int n) {
        int res = 0;
        while(n > 0) {
            int tail = n % 10;
            n /= 10;
            res += tail * tail;
        }
        return res;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = getSquareSum(n);
        while(slow != fast) {
            slow = getSquareSum(slow);
            fast = getSquareSum(getSquareSum(fast));
        }
        return slow == 1;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.isHappy(19) << endl;
    return 0;
}