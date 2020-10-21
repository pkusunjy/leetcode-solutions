#include "global.hpp"
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        string res;
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int count = 0;
        while (i >= 0 && j >= 0) {
            int a = static_cast<int>(num1[i] - '0');
            int b = static_cast<int>(num2[j] - '0');
            int tmp = a + b + count;
            res.push_back(static_cast<char>('0' + tmp % 10));
            count = tmp / 10;
            i--;
            j--;
        }
        while (i >= 0) {
            int a = static_cast<int>(num1[i] - '0');
            int tmp = a + count;
            res.push_back(static_cast<char>('0' + tmp % 10));
            count = tmp / 10;
            i--;
        }
        while (j >= 0) {
            int b = static_cast<int>(num2[j] - '0');
            int tmp = b + count;
            res.push_back(static_cast<char>('0' + tmp % 10));
            count = tmp / 10;
            j--;
        }
        if (count == 1) {
            res.push_back('1');
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.addStrings("1234", "5678") << endl;
    cout << s.addStrings("9999", "1") << endl;
    cout << s.addStrings("10000", "0") << endl;
    return 0;
}
