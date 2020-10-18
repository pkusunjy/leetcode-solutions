#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int count = 1;
        for (int i = digits.size() - 1; i >= 0; i--) {
            int tmp = (digits[i] + count) / 10;
            digits[i] = (digits[i] + count) % 10;
            count = tmp;
        }
        if (count == 1) {
            digits.push_back(digits[digits.size() - 1]);
            for (int i = digits.size() - 2; i > 0; i--) {
                digits[i] = digits[i - 1];
            }
            digits[0] = 1;
        }
        return digits;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> digits({9, 9, 9});
    vector<int> res = s.plusOne(digits);
    for (int i : res) {
        cout << i;
    }
    cout << endl;
    return 0;
}
