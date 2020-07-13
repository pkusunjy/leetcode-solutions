#include "global.hpp"
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        uint64_t sum = 1;
        while(sum - 1 < num) {
            sum <<= 1;
        }
        return sum - 1 - num;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.findComplement(INT_MAX) << endl;
    cout << s.findComplement(1) << endl;
    return 0;
}