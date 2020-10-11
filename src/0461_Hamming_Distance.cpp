#include "global.hpp"
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32> b(x ^ y);
        return b.count();
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    int x = 1;
    int y = 4;
    cout << s.hammingDistance(x, y) << endl;
    return 0;
}
