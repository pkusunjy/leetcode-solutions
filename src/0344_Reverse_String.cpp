#include "global.hpp"
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int l = 0, r = s.size() - 1; l < r; l++, r--) {
            char c = s[l];
            s[l] = s[r];
            s[r] = c;
        }
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<char> str({'h', 'e', 'l', 'l', 'o'});
    s.reverseString(str);
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << endl;
    }
    return 0;
}
