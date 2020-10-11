#include "global.hpp"
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32> b(x ^ y);
        return b.count();
    }
};
