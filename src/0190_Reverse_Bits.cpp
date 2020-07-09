#include "global.hpp"
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        uint32_t cnt = 0;
        while(n > 0) {
            res = res * 2 + n % 2;
            n /= 2;
            cnt++;
        }
        res *= pow(2, 32 - cnt);
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    uint32_t n = 43261596;
    cout << s.reverseBits(n) << endl;
    n = 4294967293;
    cout << s.reverseBits(n) << endl;
    return 0;
}