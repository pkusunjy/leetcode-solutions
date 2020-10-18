#include "global.hpp"
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)  return s;
        int totNum = 2 * numRows - 2;
        int start = 0;
        int leftBarrier = totNum;
        int rightBarrier = 0;
        string res{""};
        for (int i = start; i < s.size(); i+=leftBarrier) {
            res.push_back(s[i]);
        }
        bool isLeft = true;
        while (true) {
            leftBarrier -= 2;
            rightBarrier += 2;
            start++;
            if (leftBarrier == 0 && rightBarrier == totNum)  break;
            isLeft = true;
            for (int i = start; i < s.size();) {
                res.push_back(s[i]);
                if (isLeft) {
                    i += leftBarrier;
                    isLeft = false;
                }
                else {
                    i += rightBarrier;
                    isLeft = true;
                }
            }
        }
        for (int i = start; i < s.size(); i+=rightBarrier) {
            res.push_back(s[i]);
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.convert("LEETCODEISHIRING", 3) << endl;
    return 0;
}
