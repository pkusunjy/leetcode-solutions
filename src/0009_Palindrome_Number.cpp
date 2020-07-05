#include "global.hpp"
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)  return false;
        int64_t origin = x, tmp = x;
        int64_t reversed = 0;
        while(tmp > 0) {
            reversed = reversed * 10 + tmp % 10;
            tmp /= 10;
        }
        return reversed == origin;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    int x = 121;
    cout << s.isPalindrome(x) << endl;
    x = -121;
    cout << s.isPalindrome(x) << endl;
    x = 10;
    cout << s.isPalindrome(x) << endl;
    return 0;
}