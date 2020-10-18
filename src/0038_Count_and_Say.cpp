#include "global.hpp"
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)  return "1";
        string pre = countAndSay(n - 1);
        int idx = 0;
        string res{""};
        for (int i = 0; i < pre.size(); i++) {
            if (pre[i] == pre[idx]) {
                continue;
            }
            res += to_string(i - idx);
            res += string(1, pre[idx]);
            idx = i;
        }
        res += to_string(pre.size() - idx);
        res += string(1, pre[idx]);
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    for (int i = 1; i < 31; i++) {
        cout << s.countAndSay(i) << endl;
    }
    return 0;
}
