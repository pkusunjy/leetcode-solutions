#include "global.hpp"
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        bitset<32> b(n);
        return b.count();
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    uint32_t n = 11;
    cout << s.hammingWeight(n) << endl;
    n = 128;
    cout << s.hammingWeight(n) << endl;
    n = UINT32_MAX - 2;
    cout << s.hammingWeight(n) << endl;
    return 0;
}