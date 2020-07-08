#include "global.hpp"
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        int res = num;
        int count = 0;
        while(res > 0) {
            res /= 10;
            count++;
        }
        bool fstSix = true;
        while(count > 0) {
            if(!fstSix) { // has changed first 6 to 9, no need to continue
                res += num;
                break;
            }
            int divisor = pow(10, count - 1);
            int b = num / divisor;
            res += b * divisor;
            if(fstSix && b == 6) {
                res += 3 * divisor;
                fstSix = false;
            }
            count--;
            num %= divisor;
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.maximum69Number(9669) << endl;
    cout << s.maximum69Number(9996) << endl;
    cout << s.maximum69Number(9999) << endl;
    return 0;
}